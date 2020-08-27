#include <assert.h>

/*bool check_bpm(float bpm)
{
  return !(bpm < 70 || bpm > 150);
}
bool check_spo2(float spo2)
{
  return !(spo2 < 90);
}
bool check_respRate(float respRate)
{
 return !(respRate < 30 || respRate > 95);
}*/
/*if(bpm < 70 || bpm > 150) {
    return false;
  } else if(spo2 < 90) {
    return false;
  } else if(respRate < 30 || respRate > 95) {
    return false;
  }
  return true;
}*/
bool isInsideRange(float value,float lowerLimit,float upperLimit)
{
  return (value < lowerLimit && value > upperLimit);
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return isInsideRange(bpm,70,150) && isInsideRange(spo2,90,100) &&isInsideRange(respRate,30,95);
}
  
int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
  assert(vitalsAreOk(160, 110, 100) == false); //all our above than every range
  assert(vitalsAreOk(60, 85, 20) == false); // all are less than every range
  assert(vitalsAreOk(80, 95, 20) == false); //two are in range
  assert(vitalsAreOk(80, 50, 100) == false);  // one is in range
}
