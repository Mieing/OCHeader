@class NSMutableArray, BaseResponse;

@interface GetA8KeyLiteResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int batchCount;
@property (retain, nonatomic) NSMutableArray *ret;
@property (retain, nonatomic) NSMutableArray *respInfo;
@property (retain, nonatomic) NSMutableArray *domainInfos;
@property (retain, nonatomic) NSMutableArray *prefetchDomainInfos;

+ (void)initialize;

- (void)setPrefetchDomainInfos:(id)a0;
- (id)prefetchDomainInfos;
- (void)setDomainInfos:(id)a0;
- (id)domainInfos;
- (void)setRespInfo:(id)a0;
- (id)respInfo;
- (void)setRet:(id)a0;
- (id)ret;
- (void)setBatchCount:(unsigned int)a0;
- (unsigned int)batchCount;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
