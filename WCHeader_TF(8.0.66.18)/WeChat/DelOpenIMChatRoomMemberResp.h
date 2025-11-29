@class NSMutableArray, BaseResponse;

@interface DelOpenIMChatRoomMemberResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (void)initialize;

@end
