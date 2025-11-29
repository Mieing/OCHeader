@interface AWEPOIBDUGTrackerManager : NSObject

+ (void)trackBDUGConsumeWithType:(unsigned long long)a0 POIInfo:(id)a1 logPassback:(id)a2;
+ (id)headerParametersWithTimestamp:(unsigned long long)a0;
+ (id)bodyParametersWithType:(unsigned long long)a0 POIInfo:(id)a1 logPassback:(id)a2 timestamp:(unsigned long long)a3;
+ (unsigned long long)timestamp;
+ (unsigned long long)versionCode;

@end
