@class NSString;

@interface DigitalCertLocalConfig : WXPBGeneratedMessage

@property (nonatomic) int encryptType;
@property (retain, nonatomic) NSString *certNo;
@property (retain, nonatomic) NSString *cert;

+ (void)initialize;

@end
