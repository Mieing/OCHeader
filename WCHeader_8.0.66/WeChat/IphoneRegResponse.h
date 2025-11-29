@class BaseResponse;

@interface IphoneRegResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int tokenRefreshMode;

+ (void)initialize;

- (void)setTokenRefreshMode:(unsigned int)a0;
- (unsigned int)tokenRefreshMode;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
