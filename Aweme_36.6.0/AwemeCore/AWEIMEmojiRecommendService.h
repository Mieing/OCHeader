@class NSString, YYMemoryCache;

@interface AWEIMEmojiRecommendService : HTSService <AWEIMEmojiRecommendService>

@property (retain, nonatomic) YYMemoryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestWithContext:(id)a0;
- (void)storeRequestedEmojis:(id)a0 ofItemID:(id)a1 logid:(id)a2;
- (id)resolveSmartEmojiNamesFromMessageSyncedExt:(id)a0;
- (id)resolveSmartEmojisFromMessageSyncedExt:(id)a0;
- (id)resolveLogIDFromMessageSyncedExt:(id)a0;
- (long long)resolveUseDefaultEmojiFromMessageSyncedExt:(id)a0 defaultValue:(long long)a1;
- (id)getRecentEmojis;
- (id)appendRecentEmojisAfterEmojis:(id)a0;
- (id)appendRecentEmojisAfterEmojis:(id)a0 countLimit:(unsigned long long)a1;
- (id)p_constructEmojisFromTitles:(id)a0 logid:(id)a1;
- (void)p_trackRequestWithContext:(id)a0 duration:(double)a1 model:(id)a2 error:(id)a3;
- (id)p_localDefaultEmojis;
- (void).cxx_destruct;
- (id)init;

@end
