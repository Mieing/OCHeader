@interface AWEColdLaunchAdjustVolumeConfig : NSObject

+ (id)generalConfig;
+ (id)portraits;
+ (long long)coldLaunchAdjustGap;
+ (id)volumeStrategy;
+ (id)featureStrategies;
+ (double)minVolume;
+ (double)maxDownwardAdjustment;
+ (double)maxUpwardAdjustment;
+ (BOOL)enable;
+ (long long)version;
+ (double)maxVolume;

@end
