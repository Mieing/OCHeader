@class NSArray;

@interface AWEInterestDiscoverResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
