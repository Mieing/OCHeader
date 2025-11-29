@class BaseResponse;

@interface VoIPiLinkGetSDKModeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int sdkMode;
@property (nonatomic) unsigned int expireTime;

+ (void)initialize;

@end
