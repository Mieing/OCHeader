@class NSString, YYMemoryCache;

@interface AWEIMGroupExchangeDataManager : NSObject <AWEUserMessage, AWEIMGroupExchangeDataManagerProtocol>

@property (retain, nonatomic) YYMemoryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)writeDiskCache:(id)a0 inCid:(id)a1;
+ (id)diskCacheWithBatchID:(id)a0 inCid:(id)a1;
+ (id)diskCacheKeyWithCid:(id)a0 batchID:(id)a1;
+ (void)cleanBatchInfoWithCid:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)batchInfoWithCid:(id)a0 batchID:(id)a1;
- (void)updateBatchInfoList:(id)a0 inConversationID:(id)a1 source:(unsigned long long)a2;
- (void)writeCache:(id)a0 inCid:(id)a1;
- (void)updateBatchInfoWithMessage:(id)a0 source:(unsigned long long)a1;
- (id)cacheKeyForCid:(id)a0 batchID:(id)a1;
- (void)updateBatchInfoWithOnlineMessage:(id)a0;
- (void)updateBatchInfoWithOfflineMessage:(id)a0;
- (BOOL)updateBatchInfoWithRecall:(id)a0 dropUid:(id)a1 inCid:(id)a2;
- (void)updateConversationID:(id)a0 globalVersion:(long long)a1;
- (long long)globalVersionWithConversationID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
