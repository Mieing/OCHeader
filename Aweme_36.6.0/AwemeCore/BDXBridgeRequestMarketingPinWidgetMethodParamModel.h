@class NSString, NSNumber;

@interface BDXBridgeRequestMarketingPinWidgetMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *operation;
@property (retain, nonatomic) id extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
