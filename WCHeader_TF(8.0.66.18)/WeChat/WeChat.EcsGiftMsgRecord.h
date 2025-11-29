@class NSString;

@interface WeChat.EcsGiftMsgRecord : NSObject {
    void /* unknown type, empty encoding */ giftMsgId;
    void /* unknown type, empty encoding */ userName;
    void /* unknown type, empty encoding */ appMsgSign;
}

@property (nonatomic, copy) NSString *giftMsgId;
@property (nonatomic) void /* unknown type, empty encoding */ msgLocalId;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic) void /* unknown type, empty encoding */ hasMsgClicked;
@property (nonatomic, copy) NSString *appMsgSign;

- (id)init:(id)a0 msgLocalId:(long long)a1 userName:(id)a2 hasMsgClicked:(long long)a3 appMsgSign:(id)a4;
- (id)init;
- (void).cxx_destruct;

@end
