@class HTSLiveRoomMsgGiftExtra;

@interface HTSLiveRoomMsgExtra : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoomMsgGiftExtra *giftExtra;
@property (nonatomic) BOOL hasGiftExtra;

+ (id)descriptor;

@end
