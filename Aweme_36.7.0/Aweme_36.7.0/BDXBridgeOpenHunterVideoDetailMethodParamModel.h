@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenHunterVideoDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *awemeIndex;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *businessExtra;
@property (nonatomic) long long animation;
@property (nonatomic) long long hunterType;
@property (nonatomic) long long detailType;

+ (id)requiredKeyPaths;
+ (id)animationJSONTransformer;
+ (id)hunterTypeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)detailTypeJSONTransformer;

- (void).cxx_destruct;

@end
