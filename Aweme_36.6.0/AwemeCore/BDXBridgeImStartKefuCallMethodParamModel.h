@class NSString, NSNumber;

@interface BDXBridgeImStartKefuCallMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSNumber *is_test_env;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
