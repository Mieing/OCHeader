@class NSArray;

@interface AWEPOINearbyHotListDataResponse : AWEBaseApiModel

@property (nonatomic) long long curPage;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
