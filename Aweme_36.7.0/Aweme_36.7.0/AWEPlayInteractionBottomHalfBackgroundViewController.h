@class CAGradientLayer, UIView;

@interface AWEPlayInteractionBottomHalfBackgroundViewController : AWEPlayInteractionBaseController

@property (retain, nonatomic) UIView *bottomHalfBackgroundView;
@property (retain, nonatomic) CAGradientLayer *bottomHalfBackgroundGradientLayer;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (unsigned long long)controllerLazyLoadStrategy;
+ (BOOL)shouldShowBackGroundViewWithModel:(id)a0 context:(id)a1 container:(id)a2;

- (void)updateAllSubViews;
- (void)removeControllerFromSuperView;
- (BOOL)shouldShowBackGroundView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
