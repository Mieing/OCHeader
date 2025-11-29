@class SKBuiltinBuffer_t, BaseResponse;

@interface SetPwdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *autoAuthKey;

+ (void)initialize;

@end
