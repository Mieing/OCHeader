@class UIImage, NSObject;
@protocol IMinimizeTaskDelegateInterface;

@interface MiniTaskLaunchStarNavController : MiniTaskNavigationController

@property (nonatomic) BOOL hasActivateMinimizeInPop;
@property (retain, nonatomic) NSObject<IMinimizeTaskDelegateInterface> *restoreNotifyDelegate;
@property (retain, nonatomic) UIImage *restoreSnapshotImage;
@property (nonatomic) BOOL disableStarFloatingCheck;
@property (nonatomic) BOOL shouldShowAddStarCorner;

- (void)setTransitionContext:(id)a0;
- (void)onMiniInteractiveTransitionBegin:(id)a0;
- (void)onMiniInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (void)onMiniInteractiveTransitionWillEnd:(id)a0 isComplete:(BOOL)a1;
- (void)onMiniInteractiveTransitionDidEnd:(id)a0 isComplete:(BOOL)a1;
- (void)performInteractiveMinimizationTansition;
- (void).cxx_destruct;

@end
