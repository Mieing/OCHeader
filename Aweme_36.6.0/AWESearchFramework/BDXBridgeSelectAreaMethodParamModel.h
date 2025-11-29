@class NSDictionary, NSArray;

@interface BDXBridgeSelectAreaMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *filterData;
@property (retain, nonatomic) NSArray *allSelectedData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
