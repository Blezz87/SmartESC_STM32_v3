#define THROTTLEOFFSET 45
#define THROTTLEMAX 175
#define BRAKEOFFSET 50
#define BRAKEMAX 100

// speed limits for invividual modes in kph
#define SPEEDLIMIT_ECO 25
#define SPEEDLIMIT_NORMAL 32
#define SPEEDLIMIT_SPORT 99

// motor current limits for invividual modes in mA
// note that hacked firmware allows up to 55amps motor phase current
#define PH_CURRENT_MAX_ECO 10000
#define PH_CURRENT_MAX_NORMAL 15000
#define PH_CURRENT_MAX_SPORT 25000

// motor current limit for regen in mA
#define REGEN_MAX_CURRENT 10000

// maximum current for field weakening in mA
#define FIELD_WEAKNING_CURRENT_MAX 0 //max id

// ADC channels
#define ADC_VOLTAGE 0
#define ADC_THROTTLE 0
#define ADC_TEMP 2

