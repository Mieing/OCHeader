@class NSString;

@interface AWEDCFeedVideoContentPreloadController : AWEDCFeedBaseController <AWEDCFeedVideoContentPreloadControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)classNameWithReferString;
- (void)privacyAlertAgreed;
- (void)preloadVisibleContent;
- (void)preloadAweme:(id)a0;
- (void)cancelPreloadVideo;
- (BOOL)enableVideoPreloadOpt;
- (void)preloadVisibleItems;
- (void)loopPreloadVideoWithIndex:(long long)a0 dataSource:(id)a1;
- (id)getCurrentModelsWithIndex:(long long)a0 Datasource:(id)a1;
- (void)preloadAwemeVideoContent:(id)a0;
- (id)preloadCustomHeader:(id)a0;
- (void)startPrefetchVideo:(id)a0 tag:(id)a1 customHeaderDic:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (id)getBussinessID;
- (void)preload;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
