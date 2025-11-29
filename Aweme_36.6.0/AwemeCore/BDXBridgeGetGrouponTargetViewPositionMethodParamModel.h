@class NSString, NSNumber;

@interface BDXBridgeGetGrouponTargetViewPositionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *entranceName;
@property (copy, nonatomic) NSString *targetView;
@property (retain, nonatomic) NSNumber *cardType;
@property (retain, nonatomic) NSNumber *pageType;
@property (copy, nonatomic) NSString *area;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
