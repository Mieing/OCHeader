@class NSString, IESGCPApi;

@interface IESGCPSKCombinedCollectDownloadPlugin : NSObject <IESGCPSKCombinedPluginProtocol>

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleOpenAppStoreEvent:(id)a0 doNext:(id /* block */)a1 finish:(id /* block */)a2;
- (void)handleEvent:(id)a0 doNext:(id /* block */)a1 finish:(id /* block */)a2;
- (void).cxx_destruct;

@end
