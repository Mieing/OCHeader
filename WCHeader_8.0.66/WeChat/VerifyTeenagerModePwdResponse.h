@class NSString, BaseResponse;

@interface VerifyTeenagerModePwdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) BOOL showFrameForVerifyPwdError;

+ (void)initialize;

@end
