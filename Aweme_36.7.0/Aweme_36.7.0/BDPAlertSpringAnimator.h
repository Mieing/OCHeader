@class UIViewController, UIView;

@interface BDPAlertSpringAnimator : NSObject

@property (nonatomic) double duration;
@property (weak, nonatomic) UIView *coverView;
@property (weak, nonatomic) UIView *alertView;
@property (weak, nonatomic) UIViewController *controller;

+ (void)animateWithBezierPointOne:(float)a0 pointTwo:(float)a1 pointThree:(float)a2 pointFour:(float)a3 andDuration:(double)a4 andAnimations:(id /* block */)a5 andCompletion:(id /* block */)a6;
+ (void)presentDialogView:(id)a0 overlayView:(id)a1 completion:(id /* block */)a2;
+ (void)dismissDialogView:(id)a0 overlayView:(id)a1 completion:(id /* block */)a2;

- (void)dismissWithType:(long long)a0 completion:(id /* block */)a1;
- (void)presentWithType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;

@end
