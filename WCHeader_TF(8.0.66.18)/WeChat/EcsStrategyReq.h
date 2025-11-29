@class BaseRequest;

@interface EcsStrategyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int ecsStrategyBits;

+ (void)initialize;

- (void)setEcsStrategyBits:(unsigned int)a0;
- (unsigned int)ecsStrategyBits;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
