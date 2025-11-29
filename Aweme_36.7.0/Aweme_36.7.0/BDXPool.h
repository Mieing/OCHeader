@class BDXMultiDelegate, BDXPoolConfig, NSMutableDictionary, NSString, BDXPoolCache;

@interface BDXPool : NSObject <NSCacheDelegate, BDXPoolContainerDelegate, BDXPoolProtocol>

@property (retain, nonatomic) BDXPoolConfig *config;
@property (retain, nonatomic) BDXMultiDelegate *mutiDelegate;
@property (retain, nonatomic) BDXPoolCache *cache;
@property (retain, nonatomic) BDXPoolCache *identifierCache;
@property (retain, nonatomic) NSMutableDictionary *createCompletionMap;
@property long long currentCacheCount;
@property (copy, nonatomic) id /* block */ customContainerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchCacheWithURLString:(id)a0 context:(id)a1;
- (id)fetchCacheWithURLString:(id)a0 context:(id)a1 saveCache:(BOOL)a2;
- (void)createCacheWithURLString:(id)a0 context:(id)a1 customContainer:(id)a2 completion:(id /* block */)a3;
- (id)__getCacheItemURLString:(id)a0 create:(BOOL)a1;
- (void)__monitorContainer:(id)a0 urlString:(id)a1 event:(id)a2 category:(id)a3;
- (void)clearCacheWithIdentifier:(id)a0 afterSeconds:(long long)a1;
- (id)__identifierFromURLString:(id)a0;
- (BOOL)removeClearTimerWithIdentifier:(id)a0;
- (void)clearCacheAfterSecondsWithURLString:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldRecycleContainer:(id)a0;
- (BOOL)hasCache:(id)a0;
- (id)identifierWithURLString:(id)a0;
- (void)clearCacheWithIdentifier:(id)a0 afterSeconds:(long long)a1 completion:(id /* block */)a2;
- (void)clearWithURLString:(id)a0;
- (void)xpoolContainerDidFinishLoad:(id)a0;
- (void)xpoolContainer:(id)a0 didLoadFailedWithError:(id)a1;
- (void)xpoolContainerDidFirstScreen:(id)a0;
- (unsigned long long)countWithURLString:(id)a0;
- (void)createCacheWithURLString:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (BOOL)recycleContainer:(id)a0;
- (id)fetchContextWithURLString:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setMaxCount:(unsigned long long)a0;
- (id)init;
- (void)clearAll;
- (void)didReceiveMemoryWarning:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;
- (id)poolType;

@end
