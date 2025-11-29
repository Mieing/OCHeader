@class BaseResponse;

@interface GrantBigChatRoomResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int quota;

+ (void)initialize;

@end
