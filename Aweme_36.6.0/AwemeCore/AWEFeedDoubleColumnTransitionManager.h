@class UIViewController, UIView;

@interface AWEFeedDoubleColumnTransitionManager : NSObject

@property (retain, nonatomic) UIView *enterAnimationContainerView;
@property (retain, nonatomic) UIView *enterBackgroundView;
@property (retain, nonatomic) UIView *enterAnimationView;
@property (weak, nonatomic) UIViewController *enterFromVC;
@property (retain, nonatomic) UIView *enterFakeTabBarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enterBeginFrame;
@property (retain, nonatomic) UIView *exitAnimationContainerView;
@property (retain, nonatomic) UIView *exitBackgroundView;
@property (retain, nonatomic) UIView *exitFullScreenBackgroundView;
@property (retain, nonatomic) UIView *exitHolderView;
@property (retain, nonatomic) UIView *exitAnimationView;
@property (retain, nonatomic) UIView *exitFakeTabBarView;
@property (retain, nonatomic) UIView *exitTipsView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exitBeginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exitFinishFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exitBackgroundBeginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exitBackgroundFinishFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enterFinishFrame;

+ (id)sharedInstance;

- (void)cancelEnterAnimation;
- (void)cancelExitAnimation;
- (BOOL)prepareEnterAnimationWithFromView:(id)a0 beginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finishFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 fromVC:(id)a3;
- (void)trigerEnterAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)triggerPinchOptEnterAnimationWithCompletion:(id /* block */)a0;
- (BOOL)prepareExitAnimationWithHolderView:(id)a0 animatedView:(id)a1 beginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 finishFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 backgroundView:(id)a4 backgroundBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 backgroundFinishFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 tipsView:(id)a7;
- (void)trigerExitAnimationWithCompletion:(id /* block */)a0;
- (void)triggerPinchOptExitAnimationWithCompletionBlock:(id /* block */)a0;
- (BOOL)prepareEnterAnimationWithFromView:(id)a0 beginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finishFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 fromVC:(id)a3 backgroundView:(id)a4;
- (void)trigerEnterAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
