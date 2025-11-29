@class NSArray;

@interface AWENearbyGrouponMutipleTabModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *tabsList;

+ (id)tabsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
