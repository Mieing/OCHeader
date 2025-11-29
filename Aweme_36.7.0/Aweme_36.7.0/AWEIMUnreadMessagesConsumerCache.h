@class YYMemoryCache;

@interface AWEIMUnreadMessagesConsumerCache : NSObject

@property (retain, nonatomic) YYMemoryCache *unreadInfoCache;

+ (id)sharedCacheConcurrentQueue;
+ (id)sharedCache;

- (id)objectForConversationId:(id)a0 filterOption:(id)a1 key:(id)a2;
- (id)objectForConversationId:(id)a0 key:(id)a1;
- (BOOL)setObject:(id)a0 forConversationId:(id)a1 filterOption:(id)a2 key:(id)a3;
- (BOOL)setObject:(id)a0 forConversationId:(id)a1 key:(id)a2;
- (BOOL)removeAllObjectsForConversationId:(id)a0;
- (void).cxx_destruct;
- (void)removeAllObjects;

@end
