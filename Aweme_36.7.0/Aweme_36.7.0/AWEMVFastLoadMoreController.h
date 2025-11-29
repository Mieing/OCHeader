@class NSString, AWEMVChannelPreloadManager, AWEMVChannelPageContext;

@interface AWEMVFastLoadMoreController : AWEDCFeedBaseController <AWEMVDataPluginProtocol>

@property (retain, nonatomic) AWEMVChannelPreloadManager *preloadManager;
@property (readonly, nonatomic) AWEMVChannelPageContext *bizContext;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataStartWithReason:(unsigned long long)a0;
- (void)willFilterResponse:(id)a0 context:(id)a1;
- (BOOL)autoAttachToDataController:(id)a0;
- (void)trackLoadMoreWithBuffer:(id)a0;
- (void).cxx_destruct;

@end
