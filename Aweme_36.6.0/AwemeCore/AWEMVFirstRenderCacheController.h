@class NSString, AWEMVChannelPageContext;

@interface AWEMVFirstRenderCacheController : AWEDCFeedBaseController <AWEMVFirstRenderCacheControllerProtocol, AWEMVDataPluginProtocol>

@property (nonatomic) BOOL isFirstFetchingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)didFilterResponse:(id)a0 context:(id)a1;
- (void)tidyDidUpdateToFullModel:(id)a0 context:(id)a1 error:(id)a2;
- (BOOL)autoAttachToDataController:(id)a0;
- (void)trySaveFeedData:(id)a0 requestContext:(id)a1;
- (void).cxx_destruct;

@end
