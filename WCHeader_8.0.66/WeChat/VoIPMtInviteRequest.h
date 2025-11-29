@class VoIPMtUserInfo, BaseRequest, NSString, NSMutableArray;

@interface VoIPMtInviteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) VoIPMtUserInfo *fromUser;
@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) NSMutableArray *inviteUserList;
@property (retain, nonatomic) NSMutableArray *displayUserList;

+ (void)initialize;

@end
