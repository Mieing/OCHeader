@interface AWEColdLaunchAdjustVolumePortraitStrategy : AWEColdLaunchAdjustVolumeBaseStrategy

@property (readonly, nonatomic) double volumeStableThreshold;
@property (readonly, nonatomic) BOOL isDeltaLowerThanStandardDeviation;
@property (readonly, nonatomic) double adjustThreshold;

- (double)adjustedVolume:(double)a0;

@end
