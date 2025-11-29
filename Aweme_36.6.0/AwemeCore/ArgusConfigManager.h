@class NSObject, ArgusContainerConfigPackage, NSCondition;
@protocol OS_dispatch_queue;

@interface ArgusConfigManager : NSObject

@property (retain, nonatomic) ArgusContainerConfigPackage *containerConfigPackage;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } containerConfigPkgLock;
@property (retain, nonatomic) NSCondition *loadConfigCondition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long loadConfigStage;

+ (id)sharedInstance;

- (void)ensureConfigLoaded;
- (id)getContainerConfig:(id)a0;
- (void)p_triggerFetchGeckoConfig;
- (void)fetchConfig:(long long)a0 useBuiltin:(BOOL)a1 useSync:(BOOL)a2;
- (id)addCdnMultiVersionParams:(id)a0;
- (void)updateGeckoConfig:(id)a0;
- (void)triggerFetchGeckoConfig;
- (void)_parseContainerConfig:(id)a0 dataSource:(id)a1;
- (id)createContainerConfig:(id)a0 dataModel:(id)a1 dataSourceInfo:(id)a2;
- (void)_mergeContainerConfig:(id)a0 toMergeConfig:(id)a1;
- (id)_parseAspectConfig:(id)a0;
- (id)_mergeDictionaries:(id)a0 withDictionary:(id)a1 mergeMode:(long long)a2;
- (id)_mergeArrays:(id)a0 withArray:(id)a1;
- (id)getStrategyConfig:(id)a0 bizContainerId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
