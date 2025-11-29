@class NSString, NSNumber;

@interface BDXBridgePoiGetTextWidthMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *fontSize;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
