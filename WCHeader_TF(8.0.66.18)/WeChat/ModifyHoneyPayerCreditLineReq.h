@class BaseRequest, NSString;

@interface ModifyHoneyPayerCreditLineReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long creditLine;
@property (retain, nonatomic) NSString *authToken;
@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) NSString *takeMessage;

+ (void)initialize;

@end
