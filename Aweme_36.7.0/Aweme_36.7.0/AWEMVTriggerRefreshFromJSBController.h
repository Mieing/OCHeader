@class NSString, AWEMVChannelPageContext;

@interface AWEMVTriggerRefreshFromJSBController : AWEDCFeedBaseController <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willRequestWithContext:(id)a0;
- (void)refreshListData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
