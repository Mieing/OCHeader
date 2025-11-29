@class NSString;

@interface BDXBridgeUploadVideoToVODAuthConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *hostName;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
