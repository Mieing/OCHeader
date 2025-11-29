@class NSString;

@interface BDXBridgeGetDecryptedImageData : BDXBridgeModel

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *imageSkey;
@property (copy, nonatomic) NSString *md5;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
