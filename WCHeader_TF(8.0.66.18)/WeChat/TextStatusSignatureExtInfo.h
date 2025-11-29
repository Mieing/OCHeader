@class NSString, TextStatusSignatureExtInfo_PaySignature;

@interface TextStatusSignatureExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) TextStatusSignatureExtInfo_PaySignature *paySignature;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *mpSignature;

+ (void)initialize;

@end
