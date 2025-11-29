@class NSString, NSMutableDictionary;

@interface MagicBrushJsApiContextBase : NSObject <WAJSServicePluginContextProtocol, WAWebViewPluginContextProtocol, IMBBizContextDelegate>

@property (retain, nonatomic) NSMutableDictionary *webviewPluginPool;
@property (retain, nonatomic) NSMutableDictionary *weappPluginPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)GetWebViewPluginByName:(id)a0;
- (void)setupWebViewPlugin;
- (id)GetWeAppPluginByName:(id)a0;
- (void)setupWeAppPlugin;
- (id)pluginWhiteList;
- (id)weappPluginWhiteList;
- (id)getAppId;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)getCurrentPagePath;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getFileData:(id)a0;
- (id)getParentViewController;
- (id)getWAContact;
- (void)alterWillStop;
- (id)context;
- (id)currentWebView;
- (unsigned int)getAppVersion;
- (id)getAudioNative;
- (id)getCurPubResLogic;
- (unsigned int)getDebugModeType;
- (id)getWeMediaApi;
- (void)initGameEngine;
- (void)initWASM:(id)a0 mb:(id)a1;
- (id)instanceId;
- (BOOL)performOnService:(id)a0 selector:(SEL)a1 withObject:(id)a2;
- (void)invokeOnServiceThread:(id /* block */)a0;
- (id)pluginScheduler;
- (void)sendJSEventToService:(id)a0 param:(id)a1 webViewId:(unsigned int)a2;
- (unsigned int)getAppType;
- (id)provideCurrentViewController;
- (void).cxx_destruct;

@end
