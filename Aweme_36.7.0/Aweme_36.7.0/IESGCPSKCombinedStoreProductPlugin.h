@class NSString;

@interface IESGCPSKCombinedStoreProductPlugin : NSObject <IESGCPSKCombinedPluginProtocol>

@property (retain, nonatomic) id douyinFlowAuthToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeFlowAuthToken;
- (void)handleOpenAppStoreEvent:(id)a0 doNext:(id /* block */)a1 finish:(id /* block */)a2;
- (void)handleEvent:(id)a0 doNext:(id /* block */)a1 finish:(id /* block */)a2;
- (void)registerFlowAuthTokenWithEvent:(id)a0;
- (id)flowAuthBizModelWithEvent:(id)a0;
- (void).cxx_destruct;

@end
