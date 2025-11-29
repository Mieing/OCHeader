@class NSNumber, NSArray;

@interface AWEFreshAwemeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *minTime;
@property (retain, nonatomic) NSNumber *maxTime;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
