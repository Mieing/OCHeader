@class BaseRequest, NSString, VoIPMtUserInfo;

@interface VoIPMtScreenSharingSecurityCheckRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) VoIPMtUserInfo *fromUser;
@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSString *sdkGroupid;
@property (retain, nonatomic) NSString *sharingFileMd5;

+ (void)initialize;

@end
