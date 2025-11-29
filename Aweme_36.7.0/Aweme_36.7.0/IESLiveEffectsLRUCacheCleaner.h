@class IESLiveEffectsLRUCacheCleanerConfig, NSMutableDictionary, IESLiveEffectsLinkedNode, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveEffectsLRUCacheCleaner : NSObject

@property (nonatomic) long long totalSize;
@property (retain, nonatomic) IESLiveEffectsLinkedNode *head;
@property (retain, nonatomic) IESLiveEffectsLinkedNode *rear;
@property (retain, nonatomic) NSMutableDictionary *nodeMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) IESLiveEffectsLRUCacheCleanerConfig *lruConfig;

- (void)accessEffect:(id)a0;
- (void)insertEffect:(id)a0 path:(id)a1 ignoreCache:(BOOL)a2;
- (void)trimEffect:(id)a0 completion:(id /* block */)a1;
- (id)initWithLRUCacheConfiguration:(id)a0 dispatchQueue:(id)a1;
- (void)updateWithCapacity:(long long)a0 redLineCapacity:(long long)a1;
- (long long)getAssetTotalSizeForAssetIds:(id)a0;
- (void)loadCachedData;
- (void)putNodeToRear:(id)a0;
- (void)trimEffectMomentType:(long long)a0 whiteList:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)detachNode:(id)a0;
- (void)removeEffect:(id)a0;
- (void)saveData;

@end
