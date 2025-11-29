@class CAGradientLayer, AWESearchVoiceMessagingMetersGenerator, AWESearchAIGCVoiceInputContext, NSString, UILabel, UIView, AWESearchVoiceInputMeterView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWESearchAIGCVoiceInputPanelView : UIView <AWESearchVoiceMessagingMetersGeneratorDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lottieView;
@property (retain, nonatomic) UIView *lottieBackgroundView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *lottieBackgroundViewGradientLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundViewGradientLayer;
@property (retain, nonatomic) AWESearchVoiceInputMeterView *meterView;
@property (retain, nonatomic) AWESearchVoiceMessagingMetersGenerator *metersGenerator;
@property (nonatomic) double averagePower;
@property (retain, nonatomic) AWESearchAIGCVoiceInputContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeUI;
- (void)updateAveragePower:(float)a0;
- (void)cancelUI;
- (void)confirmUI;
- (BOOL)isVoiceInputModifyEnabledOrFlowVoiceInputEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lottieBackgroundViewGradientLayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topGradientLayerFrame;
- (void)p_addLottieBackgroundViewGradient;
- (id)tipsLabelFont;
- (double)searchVoiceCurrentAveragePower;
- (void)searchVoiceRenderStateDidChange:(id)a0;
- (void)p_addTopGradient;
- (void)p_addBackgroundViewGradient;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (id)colorNamed:(id)a0;
- (void)updateUI;
- (void)createUI;

@end
