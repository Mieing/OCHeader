@class NSString;

@interface BDXBridgeUploadAvatarParams : BDXBridgeModel

@property (copy, nonatomic) NSString *base64String;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
