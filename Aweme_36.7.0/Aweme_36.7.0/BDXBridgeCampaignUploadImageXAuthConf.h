@class NSString;

@interface BDXBridgeCampaignUploadImageXAuthConf : BDXBridgeModel

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *serviceId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
