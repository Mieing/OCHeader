@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeGetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;
@property (nonatomic) int isNewVerson;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientCheckData;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;

+ (void)initialize;

@end
