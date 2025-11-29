@class BaseRequest, NSString;

@interface PayIBGGetUserOpenIdReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *appId;

+ (void)initialize;

@end
