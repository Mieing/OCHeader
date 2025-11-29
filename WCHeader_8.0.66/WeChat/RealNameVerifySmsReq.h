@class BaseRequest, NSString;

@interface RealNameVerifySmsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *mobileNo;
@property (retain, nonatomic) NSString *mobileArea;
@property (retain, nonatomic) NSString *verifyCode;

+ (void)initialize;

@end
