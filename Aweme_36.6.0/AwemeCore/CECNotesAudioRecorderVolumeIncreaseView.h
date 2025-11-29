@class CECNotesAudioRecorderVolumeIncreaseViewConfig, CAShapeLayer, UIScrollView, UIView;

@interface CECNotesAudioRecorderVolumeIncreaseView : CECNotesAudioRecorderBaseView

@property (retain, nonatomic) UIScrollView *recordVolumeScrollView;
@property (retain, nonatomic) UIView *initializationView;
@property (retain, nonatomic) CAShapeLayer *recordShapeLayer;
@property (nonatomic) unsigned long long recordVolumeCount;
@property (retain, nonatomic) CECNotesAudioRecorderVolumeIncreaseViewConfig *config;

- (void)increaseVolumeAnimation:(double)a0 currentTime:(double)a1;
- (void)addVolumeIncreaseView;
- (id)p_getTimeTextWithValue:(double)a0;
- (void)p_drawAudioIncreaseAnimationViewWithHeight:(double)a0;
- (void)__replacePathForViews:(id)a0 waveMaxSize:(struct CGSize { double x0; double x1; })a1;
- (double)p_calculateMaxScrollViewContentWidth;
- (void)addInitializationView;
- (void).cxx_destruct;
- (double)minScale;
- (void)updateWithViewModel:(id)a0;
- (void)notifyCompletion;

@end
