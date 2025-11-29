@class NSString, WSWebViewPluginScheduler;

@interface LiteAppJsApiPlugin_LocalJSAgent : LiteAppJsApiPluginBase <WSWebCommunicator, WSWebViewPluginableProtocol>

@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (nonatomic) long long k1kCategoryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preloadPlugins;

- (id)init;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (id)communicator;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)sendEvent:(id)a0 withParams:(id)a1 sendAfterReady:(BOOL)a2;
- (void).cxx_destruct;

@end
