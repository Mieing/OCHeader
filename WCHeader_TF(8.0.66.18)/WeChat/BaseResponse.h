@class SKBuiltinString_t;

@interface BaseResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) SKBuiltinString_t *errMsg;

+ (void)initialize;

- (void)setErrMsg:(id)a0;
- (id)errMsg;
- (void)setRet:(int)a0;
- (int)ret;

@end
