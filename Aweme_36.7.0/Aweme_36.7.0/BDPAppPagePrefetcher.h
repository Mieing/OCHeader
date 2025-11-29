@class NSArray, NSDictionary, BDPUniqueID, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPAppPagePrefetcher : NSObject

@property (copy, nonatomic) NSDictionary *prefetchDataDic;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSArray *fuzzyKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dicSemphore;
@property (nonatomic) BOOL newVersion;
@property (nonatomic) BOOL hasHit;

- (unsigned long long)cacheCount;
- (id)getLocalStorage:(id)a0;
- (id)realListWithPrefetchDict:(id)a0 prefetchRulesDict:(id)a1 startPagePath:(id)a2 startPageQueryDictionary:(id)a3 localStorage:(id)a4;
- (void)debugPrefetchLogWithUniqueID:(id)a0;
- (id)environmentDict;
- (id)locationEnvDict;
- (void)setupMacthKeyParam:(id)a0;
- (BOOL)fillPrefetchModel:(id)a0 withDict:(id)a1 localStorage:(id)a2;
- (BOOL)isFullValue:(id)a0;
- (id)getQueryRealKey:(id)a0;
- (id)getStorage:(id)a0 key:(id)a1;
- (id)mismatchErrorWithKey:(id)a0;
- (void)prefetchWithSchema:(id)a0 prefetchDict:(id)a1 prefetchRulesDict:(id)a2 backupPath:(id)a3 prefetchFlag:(unsigned long long)a4;
- (BOOL)shouldUsePrefetchCacheWithParam:(id)a0 uniqueID:(id)a1 apiCallBackBlk:(id /* block */)a2 requestCompletion:(id /* block */)a3 error:(id *)a4;
- (void).cxx_destruct;
- (unsigned long long)hitCount;
- (id)initWithUniqueID:(id)a0;

@end
