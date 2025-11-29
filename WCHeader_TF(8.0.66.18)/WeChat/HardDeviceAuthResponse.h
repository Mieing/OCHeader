@class SKBuiltinBuffer_t, BaseResponse;

@interface HardDeviceAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *sessionKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *sessionBuffer;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuffer;
@property (nonatomic) unsigned int cacheTimeout;
@property (nonatomic) unsigned int blockTimeout;
@property (nonatomic) unsigned int cryptMethod;

+ (void)initialize;

@end
