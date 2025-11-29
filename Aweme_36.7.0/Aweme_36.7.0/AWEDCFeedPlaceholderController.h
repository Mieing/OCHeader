@class NSString, AWEDCFeedPlaceholderManager;

@interface AWEDCFeedPlaceholderController : AWEDCFeedBaseController <AWEDCFeedPlaceholderProtocol>

@property (retain, nonatomic) AWEDCFeedPlaceholderManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)loadPlaceholderDataCompletion:(id /* block */)a0;
- (void)cacheAwemeModels:(id)a0;
- (void)cachePlaceholderData;
- (void)applicationWillTerminateFromNoti;
- (void)appDidEnterBackgroundFromNoti;
- (void)updateRecordStartIndex;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
