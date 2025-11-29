@class NSString, NSMutableArray, BaseResponse;

@interface AddOpenIMChatRoomMemberResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) NSString *popUpWording;

+ (void)initialize;

@end
