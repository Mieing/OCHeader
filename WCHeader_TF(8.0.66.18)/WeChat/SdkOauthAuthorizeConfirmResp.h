@class NSString, NSData, BaseResponse;

@interface SdkOauthAuthorizeConfirmResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSString *wxToken;
@property (retain, nonatomic) NSString *userConfirmRedirectUrl;
@property (retain, nonatomic) NSString *userConfirmWording;
@property (retain, nonatomic) NSData *ilinkAuthBuffer;

+ (void)initialize;

@end
