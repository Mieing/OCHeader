@class NSString;

@interface BDXBridgeImDeleteLocalImageData : BDXBridgeModel

@property (copy, nonatomic) NSString *decryptImageUrl;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
