@class LOTAnimationView, UIViewController, AWEAwemeModel;

@interface AWEPlayInteractionLikeAnimationView : UIView

@property (retain, nonatomic) LOTAnimationView *diggLikeAnimationView;
@property (nonatomic) BOOL isDynamic;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController *viewController;

- (void)handleAppDidEnterBackground;
- (id)getLOTAnimationViewWithGurd:(id)a0 defaultFileName:(id)a1 completionRemove:(BOOL)a2;
- (void)trackLikeMultiClickWithTag:(long long)a0;
- (void)trackLikeAnimation:(id)a0 status:(long long)a1 reason_for_failure:(id)a2;
- (void)hideIfNeed:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withScale:(double)a1;
- (BOOL)_pointInsideDisableInteractionView:(struct CGPoint { double x0; double x1; })a0;
- (id)_disableInteractionView;
- (void)showWithModel:(id)a0 withViewController:(id)a1;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToWindow;

@end
