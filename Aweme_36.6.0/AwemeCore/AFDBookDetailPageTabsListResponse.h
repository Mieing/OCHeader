@class NSArray, NSString;

@interface AFDBookDetailPageTabsListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tabList;
@property (copy, nonatomic) NSString *defaultTabID;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
