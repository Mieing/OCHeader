@class BaseRequest, NSString, NSData;

@interface QRConnectAuthorizeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *oauthUrl;
@property (retain, nonatomic) NSData *faceVerifyResultBuffer;

+ (void)initialize;

@end
