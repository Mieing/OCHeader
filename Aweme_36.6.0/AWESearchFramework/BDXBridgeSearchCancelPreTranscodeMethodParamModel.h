@class NSString, NSNumber;

@interface BDXBridgeSearchCancelPreTranscodeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *clearCacheType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
