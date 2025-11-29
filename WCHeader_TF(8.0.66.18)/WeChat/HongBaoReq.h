@class BaseRequest, SKBuiltinBuffer_t;

@interface HongBaoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int cgiCmd;
@property (nonatomic) unsigned int outPutType;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqText;

+ (void)initialize;

@end
