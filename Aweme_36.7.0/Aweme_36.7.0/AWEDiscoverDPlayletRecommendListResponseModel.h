@class NSArray, NSNumber;

@interface AWEDiscoverDPlayletRecommendListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *recommendPlayletCardModelArray;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)recommendPlayletCardModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
