@class NSString, NSMapTable;

@interface BDPPluginWebViewComponent : BDPBridgeInstancePlugin <BDPBusinessEnginePublishProtocol>

@property (retain, nonatomic) NSMapTable *webViewMap;
@property (retain, nonatomic) NSMapTable *webViewComponentMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)instance:(id)a0 publish:(id)a1 dest:(unsigned long long)a2 param:(id)a3;
- (id)webviewComponentWithController:(id)a0 componentID:(id)a1;
- (void)insertHTMLWebViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateHTMLWebViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeHTMLWebViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
