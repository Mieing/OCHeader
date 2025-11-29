@class NSString, IESPrefetchThreadSafeDictionary, BDUGLuckyPrefetchCache, NSHashTable, NSArray, BDUGLuckyPrefetchConfig;
@protocol IESPrefetchLoaderProtocol;

@interface BDUGLuckyPrefetchManager : NSObject <IESPrefetchCapability, IESPrefetchLoaderEventDelegate, BDUGLuckyPrefetchCacheDelegate>

@property (copy, nonatomic) NSString *loaderBiz;
@property (nonatomic) BOOL isH5Prefetch;
@property (retain, nonatomic) id<IESPrefetchLoaderProtocol> prefetchLoader;
@property (retain, nonatomic) BDUGLuckyPrefetchCache *storage;
@property (retain, nonatomic) IESPrefetchThreadSafeDictionary *requestDic;
@property (nonatomic) BOOL isPrefetching;
@property (retain, nonatomic) NSHashTable *delegates;
@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSArray *channels;
@property (weak, nonatomic) Class capability;
@property (retain, nonatomic) BDUGLuckyPrefetchConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefetchManagerForContainer:(unsigned long long)a0;
+ (id)prefetchStatusString:(unsigned long long)a0;
+ (id)sharedInstance;

- (void)bindGeckoAccessKey:(id)a0 channels:(id)a1;
- (void)cache:(id)a0 didSaveObjectForKey:(id)a1;
- (BOOL)prefetchEnable;
- (id)initWithLoaderBiz:(id)a0;
- (void)prefetchDataWithWebUrl:(id)a0;
- (BOOL)paramValid:(id)a0;
- (id)currentPrefetchScript;
- (void)networkForRequest:(id)a0 completion:(id /* block */)a1;
- (id)customCacheStorage;
- (id)customConfigForProject:(id)a0 version:(id)a1;
- (void)loader:(id)a0 didFinishLoadConfig:(id)a1 withError:(id)a2;
- (void)loader:(id)a0 didFinishPrefetchOccasion:(id)a1 withError:(id)a2;
- (void)loader:(id)a0 didFinishPrefetchSchema:(id)a1 withError:(id)a2;
- (void)loader:(id)a0 didFinishPrefetchApi:(id)a1 withCacheStatus:(unsigned long long)a2;
- (void)loader:(id)a0 didFinishFetchData:(id)a1 withStatus:(unsigned long long)a2 error:(id)a3;
- (void)loader:(id)a0 logInfo:(id)a1;
- (void)requestDataWithParam:(id)a0 completion:(id /* block */)a1;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
