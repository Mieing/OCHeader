@class NSMutableArray;

@interface AWEFansCategoryListDataModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *followers;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;

+ (id)followersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
