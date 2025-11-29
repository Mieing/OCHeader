@class NSData;

@interface ExtEncryptKey : WXPBGeneratedMessage

@property (nonatomic) unsigned int keyInfo;
@property (retain, nonatomic) NSData *key;

+ (void)initialize;

@end
