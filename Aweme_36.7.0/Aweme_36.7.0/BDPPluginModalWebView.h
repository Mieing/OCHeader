@class NSString, NSMapTable;

@interface BDPPluginModalWebView : BDPBridgeInstancePlugin <BDPBusinessEnginePublishProtocol>

@property (retain, nonatomic) NSMapTable *webViewMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)instance:(id)a0 publish:(id)a1 dest:(unsigned long long)a2 param:(id)a3;
- (void)removeModalWebView:(long long)a0;
- (void)loadLocalFile:(id)a0 URLComponents:(id)a1;
- (void)openModalWebviewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)closeModalWebviewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideModalWebviewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateModalWebviewStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
