@class NSString, NSDictionary;

@interface TTASendCodeRequestModel : NSObject

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *mobile;
@property (nonatomic) long long smsCodeType;
@property (nonatomic) BOOL unbindExist;
@property (copy, nonatomic) NSString *oldMbile;
@property (nonatomic) BOOL isNeedMix;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *unusableMobileTicket;
@property (nonatomic) BOOL checkRegister;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;
- (id)init;

@end
