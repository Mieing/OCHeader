@class CAGradientLayer, AWESearchVoiceMessagingMetersGenerator, NSString, UIView, UILabel, AWESearchHomeNewStyleVoiceInputPanelViewConfig;
@protocol AWESearchVoiceInputMeterViewProtocol;

@interface AWESearchHomeNewStyleVoiceInputPanelView : UIView <AWESearchVoiceMessagingMetersGeneratorDelegate>

@property (retain, nonatomic) AWESearchHomeNewStyleVoiceInputPanelViewConfig *config;
@property (retain, nonatomic) UIView *meterBackgroundView;
@property (retain, nonatomic) UIView *tipsLabelBackgroundView;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) UIView *meterContainer;
@property (retain, nonatomic) CAGradientLayer *containerGradient;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView<AWESearchVoiceInputMeterViewProtocol> *meterView;
@property (retain, nonatomic) AWESearchVoiceMessagingMetersGenerator *metersGenerator;
@property (nonatomic) double averagePower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGradientLayer;
- (void)removeUI;
- (id)gradientLayerColors;
- (void)updateAveragePower:(float)a0;
- (void)cancelUI;
- (void)confirmUI;
- (double)searchVoiceCurrentAveragePower;
- (void)searchVoiceRenderStateDidChange:(id)a0;
- (id)meterColor;
- (id)initWithPanelConfig:(id)a0;
- (void)setupCommonSubviews;
- (void)layoutLiquidUI;
- (id)meterBackgroundViewColor;
- (id)tipsLabelBackgroundViewColor;
- (void)addMeterContainerGradientLayer;
- (id)tipsCancelColor;
- (id)tipsConfirmColor;
- (BOOL)useDarkTheme;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)layoutUI;

@end
