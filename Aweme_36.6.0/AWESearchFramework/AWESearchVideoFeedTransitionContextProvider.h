@class NSIndexPath;

@interface AWESearchVideoFeedTransitionContextProvider : NSObject <AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider>

@property (copy, nonatomic) NSIndexPath *transitionIndexPath;
@property (copy, nonatomic) id /* block */ transitionUpdateOffsetBlock;
@property (copy, nonatomic) id /* block */ transitionUpdateCompleteBlock;
@property (copy, nonatomic) id /* block */ getTransitionContextBlock;
@property (copy, nonatomic) id /* block */ getLiveTransitionContextBlock;
@property (copy, nonatomic) id /* block */ getTransitionContextViewBlock;
@property (copy, nonatomic) id /* block */ transitionShouldUpdatePlayerControllerBlock;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)liveTransitionContext;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void).cxx_destruct;

@end
