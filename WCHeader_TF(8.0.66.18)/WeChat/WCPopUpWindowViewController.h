@class UIViewPropertyAnimator, UIView;
@protocol UITimingCurveProvider;

@interface WCPopUpWindowViewController : MMWindowViewController

@property (retain, nonatomic) UIView *popUpView;
@property (copy, nonatomic) id /* block */ willShowCallback;
@property (copy, nonatomic) id /* block */ willHideCallback;
@property (copy, nonatomic) id /* block */ didHideCallback;
@property (copy, nonatomic) id /* block */ hideAnimations;
@property (nonatomic) double showDuration;
@property (nonatomic) double hideDuration;
@property (retain, nonatomic) id<UITimingCurveProvider> showTimingParameters;
@property (retain, nonatomic) id<UITimingCurveProvider> hideTimingParameters;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)clean;
- (BOOL)popUpViewAvailable;
- (void)showView:(id)a0 showAnimation:(id /* block */)a1 hideAnimation:(id /* block */)a2;
- (void)hideView;
- (void).cxx_destruct;

@end
