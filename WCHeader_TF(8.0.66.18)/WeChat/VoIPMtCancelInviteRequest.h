@class VoIPMtUserInfo, BaseRequest, NSString, NSMutableArray;

@interface VoIPMtCancelInviteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) VoIPMtUserInfo *fromUser;
@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) NSMutableArray *userList;

+ (void)initialize;

@end
