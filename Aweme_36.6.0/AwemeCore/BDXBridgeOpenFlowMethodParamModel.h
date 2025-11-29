@class NSString, NSNumber;

@interface BDXBridgeOpenFlowMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *animated;
@property (retain, nonatomic) NSNumber *openKeyboard;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
