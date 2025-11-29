@class NSString, NSData;

@interface EncryptionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int encryptAlgo;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *iv;
@property (retain, nonatomic) NSData *tag;
@property (retain, nonatomic) NSData *aad;

+ (void)initialize;

@end
