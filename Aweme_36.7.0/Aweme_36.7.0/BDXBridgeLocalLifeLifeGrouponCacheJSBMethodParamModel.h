@class NSNumber, NSString, NSArray;

@interface BDXBridgeLocalLifeLifeGrouponCacheJSBMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cacheData;
@property (retain, nonatomic) NSArray *checkParams;
@property (retain, nonatomic) NSArray *keyExtraParams;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
