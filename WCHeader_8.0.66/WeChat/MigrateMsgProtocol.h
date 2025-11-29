@class NSData;

@interface MigrateMsgProtocol : WXPBGeneratedMessage

@property (nonatomic) unsigned int encryptAlgo;
@property (retain, nonatomic) NSData *encryptKey;
@property (retain, nonatomic) NSData *hello;
@property (retain, nonatomic) NSData *ok;

+ (void)initialize;

@end
