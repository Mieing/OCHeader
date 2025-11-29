@class MiniTaskTransitionContext, UIView;
@protocol MiniTaskNavEdgeInteractiveTransitionDelegate, UIViewControllerContextTransitioning;

@interface MiniTaskNavEdgeInteractiveTransition : UIPercentDrivenInteractiveTransition

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) struct CGPoint { double x; double y; } snapshotBeginCenter;
@property (nonatomic) struct CGSize { double width; double height; } snapshotBeginSize;
@property (weak, nonatomic) id<MiniTaskNavEdgeInteractiveTransitionDelegate> delegate;
@property (nonatomic) BOOL useDefaultTransition;
@property (nonatomic) BOOL disableAnimation;
@property (retain, nonatomic) MiniTaskTransitionContext *miniTaskContext;

- (void)updateInteractiveTransition:(double)a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)clearTranstiionView;
- (void)startInteractiveTransition:(id)a0;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellRectToSnapshotRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
