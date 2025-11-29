@class AWECommonFeedContainerViewController, NSString;

@interface AWECommonFeedContainerTransitionManager : NSObject <AWEAwemeDetailTableViewControllerDelegate, AWECommonFeedContainerTransitionManagerProtocol, AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider>

@property (nonatomic) long long transitionIndex;
@property (nonatomic) long long transitionToIndex;
@property (weak, nonatomic) AWECommonFeedContainerViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ ModernTransitionUpdateOffsetBlock;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)liveTransitionContext;
- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (id)modernTransitionContext;
- (BOOL)disableSyncReferString;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (long long)preferScaleMode;
- (void)singleTapEnterDetailWithModel:(id)a0 extra:(id)a1 withPlayer:(id)a2;
- (void)singleTapEnterDetailWithModel:(id)a0 config:(id)a1 withPlayer:(id)a2;
- (id)detailVCWithInitialIndex:(long long)a0 withExtra:(id)a1;
- (id)detailVCWithConfig:(id)a0;
- (id)initWithHostContainer:(id)a0;
- (id)detailVCWithInitialIndex:(long long)a0;
- (void).cxx_destruct;

@end
