@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeSearchClickTrendingWordsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
