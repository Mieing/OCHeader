@class NSMutableArray, BaseResponse;

@interface GetA8KeyLiteResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int batchCount;
@property (retain, nonatomic) NSMutableArray *ret;
@property (retain, nonatomic) NSMutableArray *respInfo;
@property (retain, nonatomic) NSMutableArray *domainInfos;
@property (retain, nonatomic) NSMutableArray *prefetchDomainInfos;

+ (void)initialize;

@end
