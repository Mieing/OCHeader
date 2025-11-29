@class IamBizBaseRequest;

@interface MeTabStrategyResp : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseResponse;
@property (nonatomic) unsigned int open;
@property (nonatomic) unsigned int cacheLifetime;
@property (nonatomic) unsigned int acctInterval;

+ (void)initialize;

- (void)setAcctInterval:(unsigned int)a0;
- (unsigned int)acctInterval;
- (void)setCacheLifetime:(unsigned int)a0;
- (unsigned int)cacheLifetime;
- (void)setOpen:(unsigned int)a0;
- (unsigned int)open;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
