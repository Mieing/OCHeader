@interface WeChat.CarPlayVoIPCallController : WeChat.CarPlayVoIPingController

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithContact:(id)a0 toast:(id)a1 isMuted:(BOOL)a2 isVideo:(BOOL)a3;
- (void)updateButtonsWithIsMuted:(BOOL)a0;
- (void)setRoomInfoWithRoomID:(long long)a0 roomKey:(long long)a1;
- (id)initWithContact:(id)a0 toast:(id)a1;
- (void).cxx_destruct;

@end
