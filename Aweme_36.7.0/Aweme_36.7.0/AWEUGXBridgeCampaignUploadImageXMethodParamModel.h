@class NSString, BDXBridgeCampaignUploadImageXAuthConf, NSDictionary;

@interface AWEUGXBridgeCampaignUploadImageXMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *imageData;
@property (copy, nonatomic) NSString *reportUrl;
@property (retain, nonatomic) BDXBridgeCampaignUploadImageXAuthConf *authConf;
@property (copy, nonatomic) NSDictionary *imageConf;
@property (copy, nonatomic) NSDictionary *imageRequestParams;
@property (copy, nonatomic) NSDictionary *reportData;

+ (id)requiredKeyPaths;
+ (id)authConfJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
