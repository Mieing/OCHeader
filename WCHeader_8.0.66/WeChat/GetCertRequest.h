@class BaseRequest, SKBuiltinBuffer_t;

@interface GetCertRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (nonatomic) unsigned int currentCertVersion;

+ (void)initialize;

@end
