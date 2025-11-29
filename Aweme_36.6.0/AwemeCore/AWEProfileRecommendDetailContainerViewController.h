@class UIViewController, AWEListDataController, NSString, NSDictionary, UIButton, NSNumber, AWEProfileRecommendDetailDispatcher;
@protocol AWEProfilePostDetailContainerViewControllerProtocol, AWEAwemeDetailTableViewControllerProtocol;

@interface AWEProfileRecommendDetailContainerViewController : UIViewController <AWEAwemeNewDetailBlockManagerDelegate, AWEProfileRecommendDetailDispatcherDelegate, AWEZoomTransitionInnerContextProvider, AWEProfilePostDetailScrollDelegate>

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *childDetailVC;
@property (weak, nonatomic) AWEProfileRecommendDetailDispatcher *dispatcher;
@property (retain, nonatomic) AWEListDataController *dataController;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *titleBarText;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) UIButton *postWorkDetailHintButton;
@property (nonatomic) BOOL isShowingPostDetailViewController;
@property (nonatomic) double tableViewOriginMinY;
@property (nonatomic) BOOL shouldPostDetailEndMove;
@property (retain, nonatomic) NSNumber *postDetailBeginDraggingOffset;
@property (retain, nonatomic) UIViewController<AWEProfilePostDetailContainerViewControllerProtocol> *postWorkDetailVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTransitionContext;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (BOOL)zoomTransitionForbidShowToVCSnapshot;
- (BOOL)needShowliveSnapView;
- (id)targetHolderView;
- (long long)zoomTransitionItemOffset;
- (void)willStartAnimationWithToCP:(id)a0 withFromCP:(id)a1;
- (void)viewControllerDidPopDoneTransition:(id)a0;
- (void)transitionDidSubmitAnimation;
- (void)transitionDidCompleteAnimation:(BOOL)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)addChildDetailVC;
- (void)playWithBlockManagerHelper:(id)a0;
- (void)postDetailViewController:(id)a0 willBeginDragging:(id)a1;
- (void)postDetailViewController:(id)a0 scrollViewDidScroll:(id)a1;
- (void)postDetailViewController:(id)a0 exitOnScrollDidEnd:(id)a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)postDetailViewController:(id)a0 exitOnScrollDidEnd:(id)a1;
- (void)showPostDetailHintButtonIfNeed;
- (void)animateToPostDetailViewController:(id)a0;
- (void)moveTableViewAndPostDetail:(id)a0 offsetY:(double)a1;
- (BOOL)postDetailViewController:(id)a0 shouldExitOnScrollDidEnd:(id)a1;
- (void)postDetailViewController:(id)a0 endMoveWithOffsetY:(double)a1;
- (void)addPostWorkDetailHintButtonIfNeed;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3 title:(id)a4;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)animationDuration;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)currentModel;

@end
