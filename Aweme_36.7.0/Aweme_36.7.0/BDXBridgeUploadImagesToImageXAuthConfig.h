@class NSString;

@interface BDXBridgeUploadImagesToImageXAuthConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *hostName;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
