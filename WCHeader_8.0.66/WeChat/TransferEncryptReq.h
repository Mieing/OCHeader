@class TransferAesEncryptData, TransferRsaEncryptData;

@interface TransferEncryptReq : WXPBGeneratedMessage

@property (retain, nonatomic) TransferRsaEncryptData *rsaEncryptData;
@property (retain, nonatomic) TransferAesEncryptData *aesEncryptData;

+ (void)initialize;

@end
