@class NSNumber, NSString;

@interface BDXBridgeUploadImagesToImageXEncryptionConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *option;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *aesKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
