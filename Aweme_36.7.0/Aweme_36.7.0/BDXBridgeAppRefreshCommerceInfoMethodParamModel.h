@class NSString, NSArray, NSDictionary;

@interface BDXBridgeAppRefreshCommerceInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) NSArray *includes;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
