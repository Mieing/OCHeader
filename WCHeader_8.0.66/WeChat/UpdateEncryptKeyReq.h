@class BaseRequest, NSMutableArray;

@interface UpdateEncryptKeyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (nonatomic) unsigned long long maxEncryptKeyVersion;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSMutableArray *keyPair;

+ (void)initialize;

@end
