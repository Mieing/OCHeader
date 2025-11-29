@class BaseRequest, NSString;

@interface UnbindHoneyPayCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardNo;
@property (retain, nonatomic) NSString *authToken;

+ (void)initialize;

@end
