@class SKBuiltinBuffer_t, BaseResponse;

@interface AppCenterResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *respBuf;

+ (void)initialize;

@end
