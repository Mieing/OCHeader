@class NSString, NSNumber;

@interface BDXBridgeSearchPreTranscodeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSString *mobParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
