@class NSString, NSNumber;

@interface BDXBridgePoiSplitTextByWidthMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) NSNumber *maxWidth;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
