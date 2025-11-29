@class NSDictionary;

@interface AWEColdLaunchAdjustVolume : NSObject

@property (copy, nonatomic) NSDictionary *strategyClassMap;
@property (nonatomic) double coldLaunchVolume;
@property (nonatomic) double adjustedVolumeForColdLaunch;

+ (id)sharedInstance;

- (void)adjustVolumeWhenColdLaunch;
- (double)p_adjustedVolumeForColdLaunch:(double)a0;
- (double)limitedAdjustedVolume:(double)a0 originVolume:(double)a1;
- (void).cxx_destruct;

@end
