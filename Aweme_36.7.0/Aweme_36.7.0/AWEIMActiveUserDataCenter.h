@class NSMutableDictionary, YYMemoryCache, NSMutableSet, NSDictionary, NSObject, NSString;
@protocol AWEIMActiveUserUploader, OS_dispatch_semaphore;

@interface AWEIMActiveUserDataCenter : NSObject <AWEUserMessage, AWEIMActiveUserAcquirerDelegate>

@property (retain, nonatomic) NSMutableDictionary *userAcquirerDictionary;
@property (retain, nonatomic) NSMutableSet *requestingSet;
@property (nonatomic) BOOL enableNetworkSourceObservers;
@property (retain, nonatomic) NSMutableDictionary *networkSourceObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (retain, nonatomic) id<AWEIMActiveUserUploader> activeUploader;
@property (retain, nonatomic) YYMemoryCache *activeCache;
@property (retain, nonatomic) YYMemoryCache *nonFriendActiveCache;
@property (retain, nonatomic) YYMemoryCache *groupMemberCache;
@property (nonatomic) BOOL revertChangesOnAccessForSyncingData;
@property (retain, nonatomic) NSDictionary *userAcquirerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableActivityUserOpt;
+ (double)lastUploadActiveStatusTime;
+ (void)resetUploadTimerWithUpdateTime:(double)a0 context:(id)a1;
+ (id)startIMAsyncConfig;
+ (void)lockActiveUploader:(id /* block */)a0;
+ (BOOL)isAvailableSpecificallyForNonFriendActiveWithSource:(id)a0;
+ (void)setupUserActiveUploaderWithContext:(id)a0;
+ (BOOL)checkEnableServerUploadActiveStatus;
+ (id)sharedInstance;
+ (BOOL)isAvailable;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)cacheDataWithInfos:(id)a0 groupConversationID:(id)a1;
- (void)syncDataToAcquirersWithInfos:(id)a0;
- (void)applicationDidEnterBackgroundNoti:(id)a0;
- (id)activeCacheObjectForKey:(id)a0;
- (void)setAcquirer:(id)a0 forKey:(id)a1;
- (void)registNetworkCallback:(id /* block */)a0 forSource:(id)a1;
- (void)syncDataToAcquirersWithInfos:(id)a0 pageIdentifier:(id)a1;
- (id)acquirerForKey:(id)a0;
- (void)fetchUserActiveStatusWithSource:(id)a0 secUIDList:(id)a1 convIDList:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)applicationWillEnterForegroundNoti:(id)a0;
- (void)p_removeCacheData;
- (id)p_filterRequestKeysWithKeyList:(id)a0 context:(id)a1;
- (id)p_filterRequestKeysWithKeyList:(id)a0;
- (void)enumSecUidList:(id)a0 convIdList:(id)a1 countPerGroup:(long long)a2 usingBlock:(id /* block */)a3;
- (void)p_processWithInfos:(id)a0 nonFriendInfos:(id)a1 groupConversationID:(id)a2 completion:(id /* block */)a3;
- (void)fetchUserActiveStatusWithConversionID:(id)a0 completion:(id /* block */)a1;
- (void)cacheDataWithInfos:(id)a0 nonFriendInfos:(id)a1 groupConversationID:(id)a2;
- (void)syncDataToAcquirersWithInfos:(id)a0 nonFriendInfos:(id)a1;
- (void)syncDataToAcquirersWithInfos:(id)a0 nonFriendInfos:(id)a1 pageIdentifier:(id)a2;
- (void)fetchUserActiveStatusWithSource:(id)a0 secUIDList:(id)a1 convIDList:(id)a2 filterCache:(BOOL)a3 context:(id)a4 completion:(id /* block */)a5;
- (void)deleteActiveCacheObjectForKey:(id)a0;
- (id)nonFriendActiveCacheObjectForKey:(id)a0 sourceType:(unsigned long long)a1;
- (void)deleteNonFriendActiveCacheObjectForKey:(id)a0;
- (id)groupMemberCacheModelForKey:(id)a0;
- (void)removeAcquirerForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
