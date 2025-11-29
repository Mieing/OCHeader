@class NSData, NSString;

@interface ServerPSKHandShakeResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *hmacSignature;
@property (retain, nonatomic) NSData *localBaseKey;
@property (retain, nonatomic) NSString *signaturePlainJson;

+ (void)initialize;

@end
