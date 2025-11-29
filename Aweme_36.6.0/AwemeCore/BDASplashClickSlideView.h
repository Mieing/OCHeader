@class CAGradientLayer, CAShapeLayer, BDASplashButtonTouchModel, UILabel, UIView, BDASplashClickSlideViewModel;

@interface BDASplashClickSlideView : BDASplashComplianceBaseView

@property (retain, nonatomic) BDASplashClickSlideViewModel *viewModel;
@property (retain, nonatomic) UILabel *firstTitleLabel;
@property (retain, nonatomic) UILabel *secondTitleLabel;
@property (retain, nonatomic) UIView *clickView;
@property (retain, nonatomic) CAShapeLayer *trackLayer;
@property (retain, nonatomic) UIView *sliderView;
@property (retain, nonatomic) CAShapeLayer *sliderShapeLayer;
@property (retain, nonatomic) CAShapeLayer *borderShapeLayer;
@property (retain, nonatomic) CAShapeLayer *arrowLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double maxDistanceX;
@property (nonatomic) double trackArcRadius;
@property (nonatomic) double totalArcAngle;
@property (nonatomic) double sliderProportion;
@property (nonatomic) double animationDestination;
@property (retain, nonatomic) BDASplashButtonTouchModel *touchModel;

- (void)addGesture;
- (void)setupSensitivityInfo;
- (void)loadAnimation;
- (void)setupSlider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (BOOL)isPointInsideClickView:(struct CGPoint { double x0; double x1; })a0;
- (void)setupClickView;
- (void)setupTrackLayer;
- (id)p_createSliderPathWithArcCenter:(struct CGPoint { double x0; double x1; })a0 trackArcRadius:(double)a1 startAngle:(double)a2 sliderArcAngle:(double)a3;
- (void)p_setupSliderLayersWithPath:(id)a0;
- (void)p_setupSliderGradientLayers;
- (void)p_positionArrowLayerWithStartAngle:(double)a0 totalArcAngle:(double)a1 sliderProportion:(double)a2 arcCenter:(struct CGPoint { double x0; double x1; })a3 trackArcRadius:(double)a4;
- (id)p_createAnimationGroupWithAnimations:(id)a0;
- (void)baseClickGesture:(id)a0;
- (void)updateSliderUIWithProgress:(double)a0;
- (void)basePanGestureSuccess:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)updateConfig;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;
- (void)setupSubviews;
- (void)handlePanGesture:(id)a0;

@end
