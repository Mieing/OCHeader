@class NSData;

@interface PassKeyVerifyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *passKeyUserId;
@property (retain, nonatomic) NSData *rawAuthenticatorData;
@property (retain, nonatomic) NSData *sign;
@property (retain, nonatomic) NSData *clientDataJson;
@property (retain, nonatomic) NSData *credentialId;

+ (void)initialize;

@end
