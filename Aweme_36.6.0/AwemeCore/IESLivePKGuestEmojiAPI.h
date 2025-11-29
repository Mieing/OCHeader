@protocol IESLiveRoomService;

@interface IESLivePKGuestEmojiAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)fetchEmojiList:(BOOL)a0 scene:(long long)a1 emojiCategory:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
