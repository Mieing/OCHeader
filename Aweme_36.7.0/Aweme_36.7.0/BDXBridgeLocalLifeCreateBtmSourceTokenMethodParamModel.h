@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeLocalLifeCreateBtmSourceTokenMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) NSNumber *useVirtualToken;
@property (retain, nonatomic) NSNumber *enableOptPrefetch;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
