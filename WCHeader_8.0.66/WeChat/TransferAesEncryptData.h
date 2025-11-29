@class BaseRequest, SKBuiltinBuffer_t;

@interface TransferAesEncryptData : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *appData;

+ (void)initialize;

@end
