@interface RateControlConfig : NSObject

@property (nonatomic) int rcVersion;
@property (nonatomic) int rcBitrateStrategyVersion;
@property (nonatomic) int rcBitrateEntrance;
@property (nonatomic) int rcBitrateEnablePsnr;
@property (nonatomic) int rcBitrateAdjustFrequency;
@property (nonatomic) int clarityRatingVersion;
@property (nonatomic) int abrVersion;
@property (nonatomic) int abrCloseOnlineCostStrategy;
@property (nonatomic) int abrInitialLevel;
@property (nonatomic) int abrMinLevel;
@property (nonatomic) int abrMaxLevel;
@property (nonatomic) int abrUpgradeLevelLimit;
@property (nonatomic) int abrDowngradeLevelLimit;
@property (nonatomic) int abrSwitchUpperThreshold;
@property (nonatomic) int abrSwitchLowerThreshold;
@property (nonatomic) int abrSmoothWindowSize;
@property (nonatomic) int abrLevelSwitchInterval;
@property (nonatomic) int abrExternalLevelInstantApply;
@property (nonatomic) int abrScene;
@property (nonatomic) int bwCoordinatorVersion;
@property (nonatomic) int rcInteractBrMinBps;

- (id)description;

@end
