@class NSString;

@interface BDXBridgeStudioPublishMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *picBase64;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *publishType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
