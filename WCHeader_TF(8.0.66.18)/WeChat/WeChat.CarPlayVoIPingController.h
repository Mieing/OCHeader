@class NSString;

@interface WeChat.CarPlayVoIPingController : WeChat.CarPlayController {
    void /* unknown type, empty encoding */ contactTemplate;
    void /* unknown type, empty encoding */ roomID;
    void /* unknown type, empty encoding */ roomKey;
    void /* unknown type, empty encoding */ callRole;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ toast;
}

@property (nonatomic) void /* unknown type, empty encoding */ startTalkTime;
@property (nonatomic, copy) NSString *toast;

- (id)initWithContact:(id)a0 toast:(id)a1;
- (void)setRoomInfoWithRoomID:(long long)a0 roomKey:(long long)a1;
- (BOOL)isSameCallWithRoomID:(long long)a0 roomKey:(long long)a1;
- (void).cxx_destruct;

@end
