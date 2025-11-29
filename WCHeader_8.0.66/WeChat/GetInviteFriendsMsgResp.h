@class NSString, BaseResponse;

@interface GetInviteFriendsMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgContent;
@property (retain, nonatomic) NSString *inviteUrl;

+ (void)initialize;

@end
