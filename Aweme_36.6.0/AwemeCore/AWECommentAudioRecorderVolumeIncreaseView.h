@class CAGradientLayer, AWECommentAudioRecorderVolumeIncreaseViewConfig, CAShapeLayer, UILabel, UIScrollView;

@interface AWECommentAudioRecorderVolumeIncreaseView : AWECommentAudioRecorderBaseView

@property (retain, nonatomic) UILabel *recordTimeLabel;
@property (retain, nonatomic) UIScrollView *recordVolumeScrollView;
@property (retain, nonatomic) CAShapeLayer *recordShapeLayer;
@property (nonatomic) unsigned long long recordVolumeCount;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *completionLabel;
@property (retain, nonatomic) AWECommentAudioRecorderVolumeIncreaseViewConfig *config;

- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)increaseVolumeAnimation:(double)a0 currentTime:(double)a1;
- (id)gradientLayerHighLightColors;
- (id)gradientLayerDefaultColors;
- (void)addVolumeIncreaseView;
- (id)gradientLayerMaskColors;
- (id)p_getTimeTextWithValue:(double)a0;
- (void)p_drawAudioIncreaseAnimationViewWithHeight:(double)a0;
- (void)__replacePathForViews:(id)a0 waveMaxSize:(struct CGSize { double x0; double x1; })a1;
- (double)p_calculateMaxScrollViewContentWidth;
- (void).cxx_destruct;
- (double)minScale;
- (void)updateWithViewModel:(id)a0;
- (void)notifyCompletion;

@end
