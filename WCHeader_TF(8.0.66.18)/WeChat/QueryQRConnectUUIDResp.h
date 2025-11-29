@class NSString, BaseResponse;

@interface QueryQRConnectUUIDResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int errcode;
@property (retain, nonatomic) NSString *redirectUrl;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *wxToken;
@property (retain, nonatomic) NSString *userConfirmRedirectUrl;
@property (retain, nonatomic) NSString *userConfirmWording;

+ (void)initialize;

@end
