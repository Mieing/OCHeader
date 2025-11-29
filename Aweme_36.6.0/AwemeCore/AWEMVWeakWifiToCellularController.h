@class NSString;

@interface AWEMVWeakWifiToCellularController : AWEDCFeedBaseController <AWESwitchNetPushCustomPluginProtocol, AWEMVWeakWifiToCellularControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)onLoadMoreListDataStartWithReason:(unsigned long long)a0;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (BOOL)supportShowSwitchNetPushViewScene;
- (void)loadMoreBegin;
- (void)loadMoreCompletion;
- (void)viewDidAppear;
- (void)viewDidDisappear;

@end
