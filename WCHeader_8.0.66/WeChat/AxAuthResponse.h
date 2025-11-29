@class HostAlgoList, SKBuiltinBuffer_t, BaseResponse;

@interface AxAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientSessionKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *serverSessionKey;
@property (retain, nonatomic) HostAlgoList *hostAlgoListResp;

+ (void)initialize;

- (void)setHostAlgoListResp:(id)a0;
- (id)hostAlgoListResp;
- (void)setServerSessionKey:(id)a0;
- (id)serverSessionKey;
- (void)setClientSessionKey:(id)a0;
- (id)clientSessionKey;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
