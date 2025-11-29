@class NSArray;

@interface BDXBridgeCheckDesktopAppInstallStatusMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *installNameList;

+ (id)requiredKeyPaths;
+ (id)installNameListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
