@class BaseRequest, NSString;

@interface QryHoneyPayCardDetailReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardNo;

+ (void)initialize;

@end
