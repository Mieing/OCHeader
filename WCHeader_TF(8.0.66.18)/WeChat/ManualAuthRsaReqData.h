@class ECDHKey, SKBuiltinBuffer_t, NSString;

@interface ManualAuthRsaReqData : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (retain, nonatomic) ECDHKey *cliPubEcdhkey;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *pwd;
@property (retain, nonatomic) NSString *pwd2;
@property (retain, nonatomic) NSString *authTargetUserName;
@property (retain, nonatomic) NSString *userSelfShowName;

+ (void)initialize;

@end
