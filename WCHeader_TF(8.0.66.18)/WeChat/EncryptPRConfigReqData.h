@class EncryptPRConfigRsaReqData, EncryptPRConfigAesReqData;

@interface EncryptPRConfigReqData : WXPBGeneratedMessage

@property (retain, nonatomic) EncryptPRConfigRsaReqData *rsaReqData;
@property (retain, nonatomic) EncryptPRConfigAesReqData *aesReqData;

+ (void)initialize;

@end
