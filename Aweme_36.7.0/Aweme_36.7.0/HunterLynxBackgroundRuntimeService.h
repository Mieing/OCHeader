@class NSObject, HunterLynxBackgroundRuntime, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HunterLynxBackgroundRuntimeService : NSObject

@property (retain, nonatomic) HunterLynxBackgroundRuntime *runtimeModel;
@property (retain, nonatomic) NSMutableDictionary *runtimeCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (nonatomic) unsigned long long memoryWarningCount;

+ (long long)jsRuntimeTypeFromString:(id)a0;
+ (id)sharedInstance;

- (id)createBGRuntimeWithSchema:(id)a0 presetData:(id)a1 config:(id)a2 lifecycle:(id)a3;
- (void)destroyRuntimeByContainerID:(id)a0;
- (void)receiveMemoryWarningNotification:(id)a0;
- (void)executeBackgroundRuntimeCreation:(id)a0 schema:(id)a1 presetData:(id)a2 config:(id)a3 lifecycle:(id)a4 runtimeCacheKey:(id)a5;
- (void)scheduleRuntimeStateCheckForRuntime:(id)a0 monitor:(id)a1 runtimeCacheKey:(id)a2;
- (id)generatePresetData:(id)a0 forRuntime:(id)a1;
- (id)generateRuntimeOptionsWithPresetData:(id)a0 config:(id)a1 schemaParams:(id)a2 forRuntime:(id)a3;
- (id)generateGlobalPropsForRuntime:(id)a0;
- (void)notifyALLRuntimeCacheMemoryWarning;
- (void)restartALLRuntimeCache;
- (id)createBGRuntimeWithSchema:(id)a0 presetData:(id)a1 lifecycle:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
