@class NSString, YYMemoryCache;

@interface AWEIMFastChatEmojiDataService : HTSService <AWEIMFastChatEmojiDataService>

@property (retain, nonatomic) YYMemoryCache *unreadShareCache;
@property (retain, nonatomic) YYMemoryCache *diggShareEmojiCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUnreadShareVideoEmojisOfAwemeModel:(id)a0;
- (id)getRecentlyUsedEmojis;
- (void)requestEmojisForAwemeModel:(id)a0 completion:(id /* block */)a1;
- (id)getEmojisWithAwemeID:(id)a0;
- (id)p_appendIndexToEmojis:(id)a0;
- (id)getEmojisCacheDataWithAwemeID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)defaultEmojis;

@end
