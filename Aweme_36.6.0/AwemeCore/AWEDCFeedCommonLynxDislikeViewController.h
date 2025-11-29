@class UIImageView, UIView, UILabel, AWEDCFeedCommonLynxDislikeViewModel;
@protocol AWEDCFeedCommonLynxDislikeViewModelProtocol;

@interface AWEDCFeedCommonLynxDislikeViewController : UIViewController

@property (nonatomic) struct CGPoint { double x; double y; } touchLocation;
@property (nonatomic) unsigned long long positionType;
@property (retain, nonatomic) AWEDCFeedCommonLynxDislikeViewModel<AWEDCFeedCommonLynxDislikeViewModelProtocol> *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIView *innerDotView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *dislikeLabel;
@property (copy, nonatomic) id /* block */ onDidDisappearBlock;
@property (nonatomic) BOOL enableDCFeedLynxCardDislikeColorOpt;

- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 viewModel:(id)a1;
- (void)addGestureRecognizer;
- (void)playPresentAnimation;
- (void)triggerImpactFeedback;
- (void)handleTapEvent:(id)a0;
- (id)classNameWithReferString;
- (void)dismissWithAnimationForFeedback;
- (void)handleFeedbackTapEvent:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (id)pageContext;

@end
