@interface AWECommerceMultiStrategyUtility : NSObject

+ (double)getCPUUsage;
+ (long long)getNetworkSpeedKBPerSec;
+ (id)getCurrentPrfResult;
+ (double)getFreeMemoryInMB;
+ (double)getTotalMemoryInMB;
+ (double)getGPUUsage;
+ (double)getBatteryLevel;
+ (long long)commerce_getThermalState;
+ (double)getCurrentDeviceScore;

@end
