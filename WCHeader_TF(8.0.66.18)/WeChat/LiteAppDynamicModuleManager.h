@class NSMutableDictionary;

@interface LiteAppDynamicModuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *commonModule;
@property (retain, nonatomic) NSMutableDictionary *nativeModule;
@property (retain, nonatomic) NSMutableDictionary *nativeModuleInstances;
@property (retain, nonatomic) NSMutableDictionary *appModule;
@property (retain, nonatomic) NSMutableDictionary *executingApi;

+ (id)sharedInstance;
+ (BOOL)isJsonString:(id)a0;
+ (id)escapeString:(id)a0;

- (id)init;
- (void)registerModule:(id)a0 forClass:(Class)a1;
- (id)getDynamicModuleConfig:(id)a0 name:(id)a1;
- (void)registerModule:(id)a0 name:(id)a1 forClass:(Class)a2;
- (id)getAllDynamicModuleConfig:(id)a0;
- (unsigned int)genLocalId;
- (void)addExecutingApi:(unsigned int)a0 callbackId:(long long)a1 invoker:(id)a2;
- (void)removeExecutingApi:(unsigned int)a0 callbackId:(long long)a1;
- (void)registerNativeModule:(id)a0 forClass:(Class)a1;
- (id)getNativeModuleConfig:(id)a0;
- (id)createNativeModuleInstance:(id)a0 moduleId:(unsigned long long)a1;
- (void)releaseNativeModuleInstance:(unsigned long long)a0;
- (id)getNativeModuleInstance:(unsigned long long)a0;
- (BOOL)findDynamicModule:(id)a0 name:(id)a1;
- (void).cxx_destruct;

@end
