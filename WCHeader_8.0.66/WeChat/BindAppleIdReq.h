@class BaseRequest, NSString;

@interface BindAppleIdReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *identityToken;

+ (void)initialize;

@end
