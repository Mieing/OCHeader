@class BaseResponse;

@interface AdLogResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int frequency;

+ (void)initialize;

- (void)setFrequency:(unsigned int)a0;
- (unsigned int)frequency;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
