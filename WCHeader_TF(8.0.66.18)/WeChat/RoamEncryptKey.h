@class NSMutableArray;

@interface RoamEncryptKey : WXPBGeneratedMessage

@property (nonatomic) unsigned long long maxUserPasswordVersion;
@property (retain, nonatomic) NSMutableArray *keyPair;
@property (nonatomic) unsigned long long enableEncryptKeyVersion;

+ (void)initialize;

@end
