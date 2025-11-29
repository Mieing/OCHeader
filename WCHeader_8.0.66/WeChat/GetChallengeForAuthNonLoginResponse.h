@class ChanllengeInfo, BaseResponse;

@interface GetChallengeForAuthNonLoginResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ChanllengeInfo *challenge;

+ (void)initialize;

@end
