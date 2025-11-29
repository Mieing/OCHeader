@class SKBuiltinBuffer_t, BaseResponse;

@interface MultiTalkResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;

+ (void)initialize;

@end
