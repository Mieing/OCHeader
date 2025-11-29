@class NSString;

@interface HwClientEncryptFileInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int encryptAlgo;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *keyBase64;
@property (retain, nonatomic) NSString *ivBase64;
@property (retain, nonatomic) NSString *tagBase64;

+ (void)initialize;

@end
