@class NSSet, NSString;

@interface AWEBDSimTeenSuperResManagerWrapper : NSObject <BDSimSuperResImpl>

@property (readonly, nonatomic) BOOL enableSuperResolution;
@property (nonatomic) long long superResolution720Count_preload;
@property (nonatomic) long long unSuperResolution720Count_preload;
@property (nonatomic) long long currBattery;
@property (nonatomic) long long currTemperatureLevel;
@property (nonatomic) long long currCpuUsage;
@property (nonatomic) double currSrScore;
@property (nonatomic) double cureRecScore;
@property (nonatomic) long long currSpeed;
@property (nonatomic) long long curBitrate;
@property (nonatomic) long long curFps;
@property (nonatomic) long long curDuration;
@property (nonatomic) BOOL periodLimit;
@property (nonatomic) BOOL filter1080Result;
@property (retain, nonatomic) NSSet *is2KSet;
@property (retain, nonatomic) NSSet *is4KSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)preloadDowngradeIfNeededWithBitrateModel:(id)a0;
- (void)trackPreloadSRResultWithModel:(id)a0;
- (BOOL)isSatifySRConditionWithModel:(id)a0;
- (void)checkSuperResolutionWithVC:(id)a0;
- (void)configSuperResolutionWithVC:(id)a0;
- (BOOL)enableDowngradeGearWithSR;
- (BOOL)is720PWithVC:(id)a0;
- (void)setBMFProcessConfig:(id)a0;
- (BOOL)isLowBattery:(long long)a0;
- (void)trackerVideoPlayInfoWithVC:(id)a0 checked:(BOOL)a1 isEndEvent:(BOOL)a2;
- (void)configFlexSuperResolutionWithVC:(id)a0 srTypeSwitchInfo:(id)a1;
- (void)configBmfSharpWithVC:(id)a0;
- (void)setBMFFlexProcessConfig:(id)a0;
- (void)quickConfigSRWithVC:(id)a0;
- (void)quickControlSRWithVC:(id)a0 Enable:(BOOL)a1;
- (void).cxx_destruct;

@end
