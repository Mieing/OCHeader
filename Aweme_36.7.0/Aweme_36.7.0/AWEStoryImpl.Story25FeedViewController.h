@class UIViewController;

@interface AWEStoryImpl.Story25FeedViewController : AWEStoryKit.StoryKitViewController <AWEStoryContainerViewControllerDelegate, AWEZoomTransitionInnerContextProvider, AFDColorRingTransitionInnerContextProvider, AFDStory25FeedViewControllerProtocol, AWEStoryFeedViewControllerProtocol, AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ syncService;
    void /* function */ resourceReadyBlock;
    void /* unknown type, empty encoding */ tabSyncService;
    void /* unknown type, empty encoding */ trackEnterProfileEvent;
    void /* unknown type, empty encoding */ feedContext;
}

@property (nonatomic, readonly) unsigned long long transition_destinatedType;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) UIViewController *destinationViewController;
@property (nonatomic, copy) id /* block */ resourceReadyBlock;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)currentVCIsActive;
- (void)storyContainerViewControllerDidChangePlayingModel:(id)a0 externalModel:(id)a1;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (void)transitionDidCompleteAnimation:(BOOL)a0;
- (BOOL)interactiveShrinkAxisY;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (id)fromProfileID;
- (id)retrieveCollectionView;
- (void)registerTrackerService:(id)a0;
- (void)colorRingTransitionMagnifyFinish;
- (unsigned long long)colorRingTransitionAllowedTriggerDirection;
- (void)setStoryTabSyncService:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
