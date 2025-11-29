@class MMLiveMinimizeViewController, NSString, SequenceAnimationObject;
@protocol MMLiveMinimizeWindowDelegate;

@interface MMLiveMinimizeWindow : MMUIWindow <MMLiveMinimizeViewControllerDelegate>

@property (retain, nonatomic) SequenceAnimationObject *animationObject;
@property (retain, nonatomic) SequenceAnimationObject *animationObjectForAlpha;
@property (retain, nonatomic) MMLiveMinimizeViewController *viewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originMoveViewRect;
@property (weak, nonatomic) id<MMLiveMinimizeWindowDelegate> liveMinimizeWindowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vaildFrame;
- (void)updateLiveView:(id)a0;
- (void)setBackImage:(id)a0;
- (void)restoreMoveViewOriginRect;
- (void)hideMinimizeWindowWithBackImage:(id)a0 completion:(id /* block */)a1;
- (void)showMinimizeWindowWithBackImage:(id)a0 completion:(id /* block */)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)makeKeyWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenRect;
- (void)onMMLiveMinimizeViewControllerTap;
- (long long)onMMLiveMinimizeViewControllerRequestPreviousOrientation;
- (BOOL)shouldHandleStatusBarAppearance;
- (void).cxx_destruct;

@end
