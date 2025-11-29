@class MiniRecTransitionContext, UIScreenEdgePanGestureRecognizer, MinimizeEdgeGestureHandler, NSString;
@protocol MinimizeTransitionInterface, MinimizationTransitionControllerDelegate;

@interface MiniRecTransitionController : NSObject <MinimizeEdgeGestureHandlerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (nonatomic) BOOL hasActivateMinimizeAreaInPopInteration;
@property (retain, nonatomic) MiniRecTransitionContext *transionContext;
@property (nonatomic) BOOL isBlockMinimizationEntryInTheGesCallback;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (copy, nonatomic) NSString *popBackTaskKey;
@property (copy, nonatomic) NSString *popBackTaskName;
@property (weak, nonatomic) id<MinimizeTransitionInterface> transitionDelegate;
@property (weak, nonatomic) id<MinimizationTransitionControllerDelegate> taskControllerDelegate;
@property (copy, nonatomic) NSString *taskBizName;
@property (copy, nonatomic) NSString *taskBizKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performInteractiveMinimizeAnimateWithBizName:(id)a0 taskKey:(id)a1 fromView:(id)a2 percentComplete:(double)a3;
+ (void)performInteractiveMinimizeAnimateWithBizName:(id)a0 taskKey:(id)a1 fromView:(id)a2 percentComplete:(double)a3 completion:(id /* block */)a4;
+ (id)portraitSnapShotFromViewController:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setNeedMinimieTransitioningWithTaskName:(id)a0 taskKey:(id)a1;
- (void)setNeedContentTransitioningWithTaskName:(id)a0 taskKey:(id)a1;
- (void)checkHookMiniTaskTransitionContext;
- (void)clearTransitionContext;
- (id)edgeGestureRecognizer;
- (BOOL)__shouldBlockMinimizationEntryInInteractivePop;
- (void)onEdgeInteractiveTransitionBegin:(id)a0;
- (void)onEdgeInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (void)onEdgeInteractiveTransitionWillEnd:(id)a0 isComplete:(BOOL)a1;
- (void)onEdgeInteractiveTransitionDidEnd:(id)a0 isComplete:(BOOL)a1;
- (void)resetPopBackTaskNameAndKeyWithComplete:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)performMinimizationTansitionAnimationWithComletion:(id /* block */)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)mmNavigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)fetchMinimizeTransition;
- (id)__defaultMinimizeTransition;
- (id)__contentMinimizeTransitionWithContext:(id)a0;
- (id)fetchMaximizeTransition;
- (id)__multiContentMaximizeTransition;
- (id)__defaultMaximizeTransition;
- (id)__contentMaximizeTransition;
- (id)systemPopTransitionWithInteracting:(BOOL)a0 respondViewController:(id)a1;
- (id)systemDismissTransitionWithInteracting:(BOOL)a0;
- (BOOL)tryUpdateTaskSnapshotWithViewController:(id)a0;
- (BOOL)tryUpdateTaskSnapshotWithViewController:(id)a0 navigationController:(id)a1;
- (BOOL)tryUpdateTaskSnapshotWithCustomSnapshot:(id)a0;
- (BOOL)hasAnyStoreTask;
- (BOOL)__tryUpdateTaskSnapshot:(id)a0 taskStateType:(unsigned int)a1;
- (BOOL)checkTaskDataMatchedWithTaskBizName:(id)a0 taskBizKey:(id)a1;
- (id)__getCurrentTaskContext:(unsigned int)a0;
- (id)__getCurrentTaskBizName;
- (id)__getCurrentTaskBizKey;
- (void).cxx_destruct;

@end
