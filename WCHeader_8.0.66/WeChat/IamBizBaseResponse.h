@class IamBizSKBuiltinString_t;

@interface IamBizBaseResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) IamBizSKBuiltinString_t *errMsg;

+ (void)initialize;

- (void)setErrMsg:(id)a0;
- (id)errMsg;
- (void)setRet:(int)a0;
- (int)ret;

@end
