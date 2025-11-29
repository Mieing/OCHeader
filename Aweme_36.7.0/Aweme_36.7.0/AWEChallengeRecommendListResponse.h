@class NSArray, NSNumber;

@interface AWEChallengeRecommendListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *challengs;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;

+ (id)challengsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
