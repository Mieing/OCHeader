@class BaseResponse;

@interface VoIPMtScreenSharingSecurityCheckResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned int checkRet;

+ (void)initialize;

@end
