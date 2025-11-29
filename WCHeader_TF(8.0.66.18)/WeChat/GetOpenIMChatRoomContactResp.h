@class OpenIMChatRoomContact, BaseResponse;

@interface GetOpenIMChatRoomContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) OpenIMChatRoomContact *contact;

+ (void)initialize;

@end
