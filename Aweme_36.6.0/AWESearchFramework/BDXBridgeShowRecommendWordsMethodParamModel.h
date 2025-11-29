@class NSString;

@interface BDXBridgeShowRecommendWordsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *pd;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *searchPosition;
@property (copy, nonatomic) NSString *trendingSource;
@property (copy, nonatomic) NSString *penetrateParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
