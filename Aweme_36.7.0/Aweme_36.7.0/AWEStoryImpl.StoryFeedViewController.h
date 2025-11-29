@interface AWEStoryImpl.StoryFeedViewController : AWEStoryKit.StoryKitViewController <AWEStoryContainerViewControllerDelegate, AWEZoomTransitionInnerContextProvider, AFDCloseFriendsMomentViewControllerProtocol, AWEStoryFeedViewControllerProtocol> {
    void /* unknown type, empty encoding */ momentContext;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, weak) void /* function */ destinationViewController;

- (BOOL)currentVCIsActive;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (id)currentDisplayingAweme;
- (id)retrieveCollectionView;
- (void)registerTrackerService:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
