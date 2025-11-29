@interface WeChat.CarPlayVoIPReceiveController : WeChat.CarPlayVoIPingController

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithContact:(id)a0 toast:(id)a1 isVideo:(BOOL)a2;
- (void)setRoomInfoWithRoomID:(long long)a0 roomKey:(long long)a1;
- (void)safeSetDelegateWithDelegate:(id)a0;
- (id)initWithContact:(id)a0 toast:(id)a1;
- (void).cxx_destruct;

@end
