@class SKBuiltinBuffer_t, BaseResponse;

@interface SnsWsFoldSettingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *wssessionBuf;

+ (void)initialize;

@end
