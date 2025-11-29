@class NSOperationQueue, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveInteractionEmojiAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSMutableDictionary *downloadTasks;

- (id)apiPath:(id)a0;
- (id)filePathWithEmoji:(id)a0 emojiID:(id)a1 prefix:(id)a2;
- (void)fetchEmojiList:(BOOL)a0 toUserID:(id)a1 scene:(long long)a2 emojiCategory:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)fetchInteractEntranceActivityBtnsForUserId:(id)a0 completion:(id /* block */)a1;
- (void)fetchInteractGuestHonorInfoForUserId:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)sendEmojiID:(id)a0 toUserID:(id)a1 type:(long long)a2 action:(id)a3 scene:(long long)a4 completion:(id /* block */)a5;
- (void)downloadEmojiSound:(id)a0 emojiID:(id)a1 completion:(id /* block */)a2;
- (void)removeEmojiAudioCache:(id)a0 emojiID:(id)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
