@class NSData, NSString;

@interface ServerECDHHandShakeResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *ecdsaSignature;
@property (retain, nonatomic) NSString *signaturePlainJson;
@property (retain, nonatomic) NSData *server4DeviceEcdhPubKey;
@property (retain, nonatomic) NSData *encryptPskInfo;

+ (void)initialize;

@end
