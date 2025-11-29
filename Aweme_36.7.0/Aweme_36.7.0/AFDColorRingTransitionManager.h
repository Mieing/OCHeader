@class NSTimer, NSString, NSDictionary;
@protocol AFDStory25ColorRingTransitionInfoProvider;

@interface AFDColorRingTransitionManager : NSObject <AFDColorRingTransitionInnerContextProvider, UIViewControllerTransitioningDelegate, AWEZoomTransitionInnerContextProvider, AWEZoomTransitionOuterContextProvider, AFDStory25ColorRingTransitionManagerProtocol>

@property (copy, nonatomic) id /* block */ resourceReadyBlock;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (weak, nonatomic) id<AFDStory25ColorRingTransitionInfoProvider> transitionInfoProvider;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (void)zoomTransitionShrinkFinish;
- (void)colorRingTransitionShrinkFinish;
- (id)colorRingTransitionStartView;
- (void)cancelPreCreation;
- (void)transferToStory25Feed;
- (void)executeTransitionToStoryFeedWithVC:(id)a0;
- (id)preCreateStory25FeedViewControllerWithResourceReadyBlock:(id /* block */)a0;
- (id)initWithTransitionInfoProvider:(id)a0;
- (id)createStory25FeedViewControllerWithResourceReadyBlock:(id /* block */)a0;
- (void)setupTimerWithResourceReadyBlock:(id /* block */)a0;
- (id)generateTransitionParams;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)restartTimer;

@end
