@class NSMutableArray, BaseResponse;

@interface GetRecommendedCoverResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recommendedCoverList;
@property (nonatomic) unsigned int costTime;
@property (nonatomic) unsigned long long requestId;

+ (void)initialize;

@end
