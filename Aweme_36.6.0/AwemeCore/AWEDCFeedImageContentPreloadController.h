@class NSOperationQueue, NSString;

@interface AWEDCFeedImageContentPreloadController : AWEDCFeedBaseController <AWEDCFeedContentPreloadControllerProtocol>

@property (retain, nonatomic) NSOperationQueue *preloadQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)privacyAlertAgreed;
- (void)pauseAllInsImagePreloadTasks;
- (void)cancelAllInsImagePreloadTasks;
- (void)resumeAllPreloadTasks;
- (void)resumeAllInsImagePreloadTasks;
- (void)preloadVisibleContent;
- (void)suspendedAllPreloadTasks;
- (void)preloadInnerInsSecondImageWithAweme:(id)a0;
- (void)preloadAweme:(id)a0;
- (void)preloadInnerInsImageWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
