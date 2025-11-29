@class CAGradientLayer, NSString, CAShapeLayer, NSHashTable, UILabel, UIScrollView, AWEIMRecorderVolumeIncreaseViewConfig;

@interface AWEIMRecorderVolumeIncreaseView : AWEIMRichRecorderCommonView <AWEIMVolumeIncreaseViewProtocol>

@property (retain, nonatomic) UILabel *recordTimeLabel;
@property (retain, nonatomic) UIScrollView *recordVolumeScrollView;
@property (retain, nonatomic) CAShapeLayer *recordShapeLayer;
@property (nonatomic) unsigned long long recordVolumeCount;
@property (retain, nonatomic) NSHashTable *tempTable;
@property (retain, nonatomic) AWEIMRecorderVolumeIncreaseViewConfig *config;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)increaseVolumeAnimation:(double)a0 currentTime:(double)a1;
- (void)addVolumeIncreaseView;
- (id)p_getTimeTextWithValue:(double)a0;
- (void)p_drawAudioIncreaseAnimationViewWithHeight:(double)a0;
- (void)__replacePathForViews:(id)a0 waveMaxSize:(struct CGSize { double x0; double x1; })a1;
- (double)p_calculateMaxScrollViewContentWidth;
- (void)p_updateWithCurrentState:(unsigned long long)a0;
- (id)gradientLayerColorsWithColor:(id)a0;
- (void)updateWithViewWithMachineState:(unsigned long long)a0 leftTime:(double)a1;
- (void).cxx_destruct;
- (double)minScale;
- (void)updateWithViewModel:(id)a0;

@end
