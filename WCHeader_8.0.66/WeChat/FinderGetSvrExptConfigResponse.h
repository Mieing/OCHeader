@class NSMutableArray, BaseResponse;

@interface FinderGetSvrExptConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *exptConfig;
@property (nonatomic) unsigned int nextDuration;

+ (void)initialize;

- (void)setNextDuration:(unsigned int)a0;
- (unsigned int)nextDuration;
- (void)setExptConfig:(id)a0;
- (id)exptConfig;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
