#include <assert.h>

bool check_bpm(float bpm)
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
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  check_bpm(bpm);
  check_spo2(spo2);
  check_respRate(respRate);
}
  /*if(bpm < 70 || bpm > 150) {
    return false;
  } else if(spo2 < 90) {
    return false;
  } else if(respRate < 30 || respRate > 95) {
    return false;
  }
  return true;*/
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
