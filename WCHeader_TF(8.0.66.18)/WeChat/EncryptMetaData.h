@class NSString;

@interface EncryptMetaData : WXPBGeneratedMessage

@property (nonatomic) unsigned int algorithm;
@property (retain, nonatomic) NSString *iv;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSString *key;

+ (void)initialize;

@end
