@class NSString, YYMemoryCache;

@interface AWEIMElfBotDataCache : HTSService <AWEUserMessage, AWEIMElfBotDataCacheService>

@property (retain, nonatomic) YYMemoryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCacheWithConfig:(id)a0;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)dataModelTimestampWithConversationID:(id)a0;
- (void)removeCacheWithConversationID:(id)a0;
- (BOOL)canUseMemoryConversationShortID:(long long)a0;
- (BOOL)shouldSendMemoryConversationShortID:(long long)a0 conversationID:(id)a1;
- (void)updateMemoryCacheInfoWithString:(id)a0 convShortID:(long long)a1;
- (id)sendMsgContextModelWithConversationID:(id)a0;
- (id)sendDictionaryDataWithConversationID:(id)a0;
- (void)dataModelWithConversationID:(id)a0 completion:(id /* block */)a1;
- (id)dataModelWithConversationID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
