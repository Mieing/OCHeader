@protocol IESLiveAnchorStartLiveStrategyViewModelDelegate;

@interface IESLiveAnchorStartLiveStrategyViewModel : NSObject

@property (nonatomic) long long enableSitiFromVpass;
@property (nonatomic) double bFrameBitrateRatioFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioV1FromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioGe1080pFromVpass;
@property (nonatomic) double videoDenoiseBitrateRatioLt1080pFromVpass;
@property (nonatomic) int lastEnableSitiFromstrategy;
@property (nonatomic) int lastEnableVideoDenoiseFromstrategy;
@property (nonatomic) int lastBFrameBitrateRatioFromstrategy;
@property (nonatomic) int lastRatioV1Fromstrategy;
@property (nonatomic) int lastGe1080pRatioFromstrategy;
@property (nonatomic) int lastLt1080pRatioFromstrategy;
@property (nonatomic) int lastEnableSitiBpsAdjust;
@property (nonatomic) int lastEnableSitiFpsAdjust;
@property (weak, nonatomic) id<IESLiveAnchorStartLiveStrategyViewModelDelegate> delegate;

- (id)encodeStrategyInfo:(id)a0;
- (void)collectAnchorStartLiveInfo;
- (void)collectRoomStrategyInfo:(id)a0;
- (void)updateAnchorStartLiveStrategyAllFactor;
- (void)addRealTimeFeature:(id)a0 roomModel:(id)a1;
- (void)changeNormalConfigPushBitrate;
- (void)changeNormalConfigPushFps;
- (void)changeConfigForDegradePushBitrate;
- (void)changeAudioEncodeConfig;
- (void).cxx_destruct;

@end
