@interface AWEColdLaunchAdjustVolumeTimeStrategy : AWEColdLaunchAdjustVolumeBaseStrategy

+ (long long)currentHourInSystemTimeZone;

- (double)adjustedVolume:(double)a0;

@end
