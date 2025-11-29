@class MMKV, NSDictionary, NSString, NSArray;

@interface BDXMixABTestHelper : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (copy) NSDictionary *hostOriginData;
@property (nonatomic) BOOL shouldPreloadNewPiperHandler;
@property (nonatomic) BOOL shouldPreloadLegacyPiperHandler;
@property (nonatomic) BOOL ignoreCheckNetworkConnectedBeforeRequest;
@property (readonly, nonatomic) long long forestGeneralMemoryCacheSize;
@property (readonly, nonatomic) long long forestPreloadMemoryCacheSize;
@property (readonly, nonatomic) long long enableForestTemplateBundle;
@property (readonly, nonatomic) long long ttDownloaderCacheLifeTimeMax;
@property (readonly, nonatomic) BOOL enableOptimizedTTDownloaderCacheKey;
@property (readonly, nonatomic) BOOL enableUpdateContainerSizeOfGlobalProps;
@property (readonly, nonatomic) BOOL noMoreTopVCProvided;
@property (readonly, nonatomic) BOOL onlyCheckExpiredWhenFetchPrefetchData;
@property (readonly, nonatomic) BOOL enableAnniexPredefine;
@property (copy, nonatomic) NSString *publicPathAnniexPredefine;
@property (copy, nonatomic) NSArray *externalsAnniexPredefine;
@property (nonatomic) BOOL forceWebPrecreate;
@property (copy, nonatomic) NSArray *webPrecreateUrlAllowList;
@property (copy, nonatomic) NSArray *webReuseUrlAllowList;
@property (nonatomic) BOOL forbidPrecreateInBackground;
@property (nonatomic) BOOL enableAnnieXWorker;
@property (nonatomic) long long workerDealySeconds;
@property (nonatomic) BOOL workerIsOnlyLocal;
@property (copy, nonatomic) NSString *resUrl;
@property (nonatomic) BOOL enablePreCreateWhenReuse;
@property (nonatomic) BOOL enableReuseCardModel;
@property (nonatomic) BOOL enableLiveInjectConfigChannel;
@property (nonatomic) BOOL enablePageConcurrentLoad;
@property (copy, nonatomic) NSArray *pageConcurrentLoadAllowList;
@property (copy, nonatomic) NSArray *pageConcurrentLoadBlockList;
@property (nonatomic) BOOL enableSalamanderAnniexMonitor;
@property (nonatomic) BOOL enableSalamanderAnniexMonitorLogService;
@property (nonatomic) BOOL enableJSBStartupOpt;
@property (nonatomic) BOOL enableSalamanderRedirect;

+ (id)shareInstance;

- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)integerForValue:(id)a0 defaultValue:(long long)a1;
- (id)stringForValue:(id)a0 defaultValue:(id)a1;
- (id)dictionaryForValue:(id)a0 defaultValue:(id)a1;
- (id)arrayForValue:(id)a0 defaultValue:(id)a1;
- (BOOL)forestSwitchBoolForValueWithKey:(id)a0 defaultVal:(BOOL)a1;
- (id)wasmDisableConfigAnniexPredefine:(id)a0;
- (BOOL)boolForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)pageUseAnnieXCardAllowList;
- (id)forestSwitchArrayForValueWithKey:(id)a0 defaultVal:(id)a1;
- (id)forestPreloadDisallowList:(BOOL)a0 isLynx:(BOOL)a1;
- (id)forestPreloadAllowList:(BOOL)a0 isLynx:(BOOL)a1;
- (id)forestSwitchDictionaryForValueWithKey:(id)a0 defaultVal:(id)a1;
- (long long)forestSwitchIntegerForValueWithKey:(id)a0 defaultVal:(long long)a1;
- (id)hostObjectForKeyPath:(id)a0;
- (BOOL)boolForValue:(id)a0 defaultValue:(BOOL)a1;
- (long long)integerForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)mergedArrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)p_forestKey:(id)a0;
- (id)mergedDictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (void)updateOriginData:(id)a0;
- (id)pageUseAnnieXCardBlockList;
- (BOOL)pageForceUseAnnieXCard;
- (void).cxx_destruct;
- (id)init;

@end
