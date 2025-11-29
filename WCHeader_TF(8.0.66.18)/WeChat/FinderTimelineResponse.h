@class NSString, NSMutableArray, BaseResponse;

@interface FinderTimelineResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) NSMutableArray *algoRecommendObject;
@property (nonatomic) unsigned long long algoRecommendDisplayid;

+ (void)initialize;

@end
