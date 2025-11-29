@class NSNumber, NSDictionary, NSString;

@interface BDXBridgeDpbIapNewMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *dpbNum;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) NSString *type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
