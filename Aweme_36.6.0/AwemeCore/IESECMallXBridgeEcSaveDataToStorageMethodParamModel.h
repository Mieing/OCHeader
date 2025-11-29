@class NSString, NSDictionary;

@interface IESECMallXBridgeEcSaveDataToStorageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSDictionary *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
