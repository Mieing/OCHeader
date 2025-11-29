@class NSString, NSArray, BDXBridgeStudioCompressImageConfig;

@interface BDXBridgeStudioCompressImageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *reactId;
@property (retain, nonatomic) NSArray *imagePathArray;
@property (retain, nonatomic) BDXBridgeStudioCompressImageConfig *config;

+ (id)requiredKeyPaths;
+ (id)configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
