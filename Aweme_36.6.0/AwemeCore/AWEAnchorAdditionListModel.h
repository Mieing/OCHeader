@class NSArray, NSString;

@interface AWEAnchorAdditionListModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long sectionType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL searchHasMore;

+ (id)cellModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
