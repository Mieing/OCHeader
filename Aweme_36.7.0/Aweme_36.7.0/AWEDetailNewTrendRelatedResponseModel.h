@class NSArray;

@interface AWEDetailNewTrendRelatedResponseModel : AWEBaseApiModel

@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;
@property (retain, nonatomic) NSArray *relatedTrendList;

+ (id)relatedTrendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
