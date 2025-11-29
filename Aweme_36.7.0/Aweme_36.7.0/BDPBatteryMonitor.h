@interface BDPBatteryMonitor : NSObject

+ (long long)batteryStatus;
+ (double)capacity;
+ (BOOL)lowPowerModeEnabled;
+ (long long)thermalState;

@end
