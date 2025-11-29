@class _TtC6WeChat15MagicRewardView;

@interface MMLiveMagicEngineEnergyAdjustTask : NSObject <WeChat.IMRViewListener>

@property (weak, nonatomic) _TtC6WeChat15MagicRewardView *magicRewardView;
@property (copy, nonatomic) id /* block */ onQuailtyLevelChangedCallback;
@property (copy, nonatomic) id /* block */ onFrameRateChangedCallback;
@property (nonatomic) long long currQuailtyLevel;
@property (nonatomic) double currPixelRatio;

- (id)initWithRewardView:(id)a0;
- (void)configListeners;
- (BOOL)isActive;
- (void)initSettingQualityLevel:(long long)a0;
- (void)initSettingPixelRatio:(double)a0;
- (void)adjustQuailtyLevel:(long long)a0;
- (void)updateQualityLevel;
- (void)adjustFrameRate:(unsigned int)a0;
- (void)delayCheckStatsAfter:(double)a0;
- (void)onAnimationStartWithView:(id)a0;
- (void)onAnimationCancelWithView:(id)a0;
- (void)onAnimationEndWithView:(id)a0;
- (void)onAnimationRepeatWithView:(id)a0;
- (void)onAnimationTimeoutWithView:(id)a0;
- (void).cxx_destruct;

@end
