@class NSString, TIMXLRUCache, TIMXSDKInstance;

@interface TIMXConversationORMCacheServiceIMPL : NSObject <TIMXNewMessageStoreEventProtocol, TIMXStartUpTaskProtocol, TIMXLRUCacheDelegate, TIMXConversationORMCacheService, TIMXInstanceScopeSingleton>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) TIMXLRUCache *cache;
@property (nonatomic) long long expiredTime;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic) double minCacheHitRate;
@property (nonatomic) double minCacheUtilizationRate;
@property (nonatomic) double samplingRate;
@property (nonatomic) double maxMemoryPercentage;
@property (nonatomic) double minAvailableMemory;
@property double lastExpandCacheCapacityTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)receiveMemoryWarning:(id)a0;
- (void)messageStore:(id)a0 internalNotifyWithUpdate:(id)a1 context:(id)a2;
- (void)unionSetWithOriginSet:(id)a0 targetSet:(id)a1;
- (BOOL)enableExpandCapacity;
- (void)expandCapacityWithUtilizationRate:(double)a0 hitRate:(double)a1 shouldExpandCapacity:(BOOL)a2;
- (BOOL)isSamplingHit;
- (void)cache:(id)a0 didChangeHitRate:(double)a1 cacheUtilizationRate:(double)a2 hitCount:(unsigned long long)a3 queryCount:(unsigned long long)a4;
- (id)conversationWithIdentifier_QueryFromCache:(id)a0;
- (id)conversationWithIdentifier_QueryFromDB:(id)a0;
- (id)conversationsWithIdentifiers:(id)a0 isAllCacheHit:(BOOL *)a1;
- (void)removeCacheWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
