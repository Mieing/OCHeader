@class NSString;

@interface BTMXBridgeRegisterBtmPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (retain, nonatomic) id pageEventParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
