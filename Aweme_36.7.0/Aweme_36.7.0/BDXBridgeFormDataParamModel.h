@class NSString;

@interface BDXBridgeFormDataParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

+ (id)requiredKeyPaths;
+ (id)formDataParamWithKey:(id)a0 andValue:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
