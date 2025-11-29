@class NSString, UIViewController, AWEMixVideoPanelDetailTableViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEMixVideoPanelDetailTableViewContainerController : UIViewController <AWEMixBarInPlaceTransitionToContentProvider, AWEInPlaceTransitionFromContentProvider, AWEInPlaceTransitionToContentProvider, AWEMixVideoPanelDetailTableViewContainerControllerProtocol>

@property (retain, nonatomic) AWEMixVideoPanelDetailTableViewController *tableViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long transition_playStateBeforeViewWillDisappear;
@property (readonly, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableController;

+ (Class)aAWEPadMixVideoImmersiveAdapterClass;
+ (Class)aAWEPadMixVideoRotateAdapterClass;
+ (Class)aAWEMixVideoPanelDetailTableViewControllerAdapterClass;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (id)transition_directlyPresentingViewController;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (id)transition_contextProviderTopLevelView:(id)a0 changeRectBlock:(id /* block */)a1;
- (id)initWithAwemeModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (id)aAWEPadMixVideoImmersiveAdapter;
- (id)transition_videoController;
- (BOOL)transition_shouldFixPlayerControllerForFromModel:(id)a0 toModel:(id)a1;
- (void)transition_scrollToPlayerControllerWithFromModel:(id)a0;
- (id)transition_bottomMoveView;
- (id)transition_alphaViewArray;
- (id)transition_interactionController;
- (void)transition_customAnimateDidFinishWithVideoController:(id)a0;
- (BOOL)transition_isMoveFromVC;
- (id)aAWEPadMixVideoRotateAdapter;
- (id)aAWEMixVideoPanelDetailTableViewControllerAdapter;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
