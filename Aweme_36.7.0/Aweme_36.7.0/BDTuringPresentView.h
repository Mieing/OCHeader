@class BDTuringNavigationController, NSMutableSet, UIWindow;

@interface BDTuringPresentView : UIWindow

@property (retain, nonatomic) NSMutableSet *presentingViews;
@property (retain, nonatomic) NSMutableSet *presentingViewControllers;
@property (retain, nonatomic) BDTuringNavigationController *turingNavi;
@property (weak, nonatomic) UIWindow *preKeyWindow;

+ (id)defaultPresentView;

- (void)restoreOrientation;
- (void)dismissVerifyView;
- (void)ensurePortrait;
- (void)presentView:(id)a0;
- (void)presentVerifyView:(id)a0;
- (void)hideVerifyView:(id)a0;
- (void)presentUniversalView:(id)a0;
- (void)hideUniversalView:(id)a0;
- (void)dismissUniversalView;
- (void)presentTwiceVerifyViewController:(id)a0;
- (void)hideTwiceVerifyViewController:(id)a0;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissView;
- (void)hideView:(id)a0;

@end
