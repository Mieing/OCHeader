@class NSString, FlutterEngine, WxaRouterPlugin, WxaLiteAppWidgetFlutterPluginApi, NSMutableDictionary, NSObject, FlutterViewController, NSNumber;
@protocol FlutterBinaryMessenger, FlutterPluginRegistrar, FlutterTextureRegistry;

@interface WxaLiteAppWidgetPlugin : NSObject <FlutterPlugin, WxaLiteAppWidgetHostPluginApi>

@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (readonly, nonatomic) NSObject<FlutterPluginRegistrar> *registrar;
@property (readonly, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (weak, nonatomic) FlutterEngine *engine;
@property (weak, nonatomic) FlutterViewController *flutterViewController;
@property (retain, nonatomic) NSNumber *engineId;
@property (retain, nonatomic) WxaRouterPlugin *routerPlugin;
@property (retain, nonatomic) NSMutableDictionary *liteAppWidgetAdapterMap;
@property (retain, nonatomic) WxaLiteAppWidgetFlutterPluginApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (id)initWithRegistry:(id)a0 registrar:(id)a1 messenger:(id)a2;
- (void)dealloc;
- (void)detachFromEngineForRegistrar:(id)a0;
- (void)cleanWxaLiteAppWidget;
- (void)initWithError:(id *)a0;
- (id)getLiteAppEngineIdWithError:(id *)a0;
- (void)checkAndGetLiteAppPathMsg:(id)a0 completion:(id /* block */)a1;
- (void)genLiteAppUuidMsg:(id)a0 completion:(id /* block */)a1;
- (void)showLiteAppViewMsg:(id)a0 error:(id *)a1;
- (void)destroyLiteAppViewMsg:(id)a0 error:(id *)a1;
- (void)createStoreMsg:(id)a0 error:(id *)a1;
- (void)createStoreWithPkgPathMsg:(id)a0 error:(id *)a1;
- (void)releaseStoreMsg:(id)a0 error:(id *)a1;
- (id)storeIsAliveMsg:(id)a0 error:(id *)a1;
- (id)dispatchStoreMsg:(id)a0 error:(id *)a1;
- (void)subscribeStoreMsg:(id)a0 error:(id *)a1;
- (void)unsubscribeStoreMsg:(id)a0 error:(id *)a1;
- (void)publishGlobalEventToAllMsg:(id)a0 error:(id *)a1;
- (void)publishGlobalEventToAllByAppIdMsg:(id)a0 error:(id *)a1;
- (void)publishGlobalEventMsg:(id)a0 error:(id *)a1;
- (void)publishGlobalEventToTopPageMsg:(id)a0 error:(id *)a1;
- (void)publishEventToTopPageMsg:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
