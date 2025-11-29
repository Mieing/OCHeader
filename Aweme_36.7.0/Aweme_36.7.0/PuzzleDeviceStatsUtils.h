@interface PuzzleDeviceStatsUtils : NSObject

+ (BOOL)_isOverTime;
+ (void)_updateValueIfNeeded;
+ (double)_getCPUUsage;
+ (long long)_getTemperature;
+ (void)_getMemoryRestWithCallback:(id /* block */)a0;
+ (double)_getMemoryRest;
+ (id)deviceInfo;

@end
