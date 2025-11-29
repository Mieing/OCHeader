@class NSString;
@protocol WAJSEventHandlerContextDelegate;

@interface WAWasmBridgeService : NSObject <WAJSEventHandlerContextDelegate> {
    void *_linker;
    id<WAJSEventHandlerContextDelegate> _context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextDelegate:(id)a0;
- (void)setWasmBridgeLinker:(void *)a0;
- (void)setupInvokeHandler:(id)a0 param:(id)a1 callbackId:(unsigned int)a2 appId:(id)a3;
- (id)getAppId;
- (void)endWithResult:(id)a0 callbackId:(unsigned int)a1;
- (void)endWithResult:(id)a0 handler:(id)a1;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)GetWebViewPluginByName:(id)a0;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)a0;
- (void).cxx_destruct;

@end
