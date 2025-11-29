@class BaseRequest, NSString;

@interface QryHoneyPayerDetailReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardNo;

+ (void)initialize;

@end
