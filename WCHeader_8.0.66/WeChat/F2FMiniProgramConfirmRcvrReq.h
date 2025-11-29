@class BaseRequest, NSString;

@interface F2FMiniProgramConfirmRcvrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *confirmToken;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
