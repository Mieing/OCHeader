@class NSString, NSArray;

@interface BDXBridgeEcLynxSaveEcomVirtualWordMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSArray *reportTypeList;
@property (retain, nonatomic) NSArray *words;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
