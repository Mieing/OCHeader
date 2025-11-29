@class WxaRouterConfig, FlutterEngine, NSMutableDictionary, NSMutableArray;
@protocol WxaRouterFlutterEngineDelegate;

@interface WxaRouter : NSObject

@property (nonatomic) unsigned long long defaultEngineId;
@property (nonatomic) BOOL isDefaultEngineUsed;
@property (retain, nonatomic) NSMutableArray *destroyingEngines;
@property (weak, nonatomic) id<WxaRouterFlutterEngineDelegate> flutterEngineDelegate;
@property (retain, nonatomic) FlutterEngine *defaultFlutterEngine;
@property (retain, nonatomic) WxaRouterConfig *config;
@property (retain, nonatomic) NSMutableDictionary *pluginMap;
@property (retain, nonatomic) NSMutableDictionary *flutterEngineIdMap;
@property (nonatomic) unsigned long long engineId;

+ (id)sharedInstance;

- (id)init;
- (void)setup:(id)a0;
- (BOOL)isSetup;
- (void)create:(id)a0 engineId:(unsigned long long)a1;
- (void)destroy:(id)a0 engineId:(unsigned long long)a1;
- (BOOL)isFlutterEngineReady;
- (void)preloadFlutterEngine;
- (BOOL)canReleasePreloadFlutterEngine;
- (void)destroyPreloadFlutterEngine:(unsigned long long)a0;
- (unsigned long long)provideFlutterEngine:(BOOL)a0;
- (unsigned long long)provideFlutterEngine:(BOOL)a0 useImpeller:(BOOL)a1;
- (void)registerPlugins:(id)a0;
- (id)getDartVmArgsUseImpeller:(id)a0;
- (unsigned long long)createFlutterEngine:(BOOL)a0 exclusive:(BOOL)a1;
- (void)invokeMethod:(unsigned long long)a0 method:(id)a1 arguments:(id)a2;
- (void)invokeMethod:(unsigned long long)a0 method:(id)a1 arguments:(id)a2 result:(id /* block */)a3;
- (void)addConsumer:(unsigned long long)a0 conusmer:(id)a1;
- (void)removeConsumer:(unsigned long long)a0 conusmer:(id)a1;
- (void)releaseEngine:(unsigned long long)a0;
- (void)invokeMethodWithTimeout:(unsigned long long)a0 method:(id)a1 arguments:(id)a2 timeout:(int)a3 callback:(id /* block */)a4;
- (void)recordFlutterEngineId:(unsigned long long)a0 engine:(id)a1;
- (void)removeFlutterEngine:(unsigned long long)a0;
- (id)getFlutterEngine:(unsigned long long)a0;
- (void)clearAllEngine;
- (BOOL)canUseFlutterEngine:(unsigned long long)a0;
- (void).cxx_destruct;

@end
