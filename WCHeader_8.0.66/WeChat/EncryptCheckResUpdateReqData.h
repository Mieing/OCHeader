@class EncryptCheckResUpdateRsaReqData, EncryptCheckResUpdateAesReqData;

@interface EncryptCheckResUpdateReqData : WXPBGeneratedMessage

@property (retain, nonatomic) EncryptCheckResUpdateRsaReqData *rsaReqData;
@property (retain, nonatomic) EncryptCheckResUpdateAesReqData *aesReqData;

+ (void)initialize;

@end
