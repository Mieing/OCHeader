@class UIImage, NSString;

@interface MMLiveMorphVideoSnapshotPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIImage *snapshotImg;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceContentFrameInScreen;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL isVideoSceneMode;
@property (nonatomic) BOOL targetHasBottomView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitionParameters:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)innerExtendForMaximizeToPartOfScreen:(id)a0 fromView:(id)a1 toView:(id)a2 maximizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)innerExtendForMaximizeToAllOfScreen:(id)a0 fromView:(id)a1 toView:(id)a2 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getToViewFinalRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMaximizeToRect:(id)a0;
- (void).cxx_destruct;

@end
