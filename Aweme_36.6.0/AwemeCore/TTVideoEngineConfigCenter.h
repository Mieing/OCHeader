@class NSMutableString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface TTVideoEngineConfigCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *configMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *signal;
@property (retain, nonatomic) NSMutableString *logString;

+ (id)defaultCenter;

- (void)releaseLog;
- (void)_releaseLog;
- (void)saveConfig:(id)a0 forKey:(long long)a1 ofTag:(id)a2;
- (id)configForKey:(long long)a0 ofTag:(id)a1;
- (void)saveConfigurations:(id)a0 ofTag:(id)a1;
- (void)removeConfigurationsForTag:(id)a0;
- (void)alogWithConfig:(long long)a0 value:(id)a1 tag:(id)a2;
- (void).cxx_destruct;

@end
