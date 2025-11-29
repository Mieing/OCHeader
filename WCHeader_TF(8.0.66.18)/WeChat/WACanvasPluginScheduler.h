@class NSDictionary, NSString;

@interface WACanvasPluginScheduler : NSObject <WAWebViewPluginContextProtocol, WAJSServicePluginContextProtocol>

@property (retain, nonatomic) NSDictionary *webviewPluginPool;
@property (retain, nonatomic) NSDictionary *servicePluginPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduler;

- (void)setup;
- (void)setupWebViewPlugin;
- (void)setupServicePlugin;
- (void)setupEvent;
- (void)sendWebViewEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)sendServiceEvent:(long long)a0 userInfo:(id)a1;
- (id)GetWebViewPluginWithName:(id)a0;
- (id)GetServicePluginWithName:(id)a0;
- (id)getAppId;
- (id)getWAContact;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)getParentViewController;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (id)getFileData:(id)a0;
- (void)_handleWebViewEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)_handleServiceEvent:(long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end
