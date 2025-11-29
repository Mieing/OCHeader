@class NSString, ChatRoomInfo, BaseResponse;

@interface SubscribeNewGameResponse_V2 : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isSubscribed;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) ChatRoomInfo *chatRoomInfo;

+ (void)initialize;

@end
