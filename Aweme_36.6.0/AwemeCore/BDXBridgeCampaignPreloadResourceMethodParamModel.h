@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeCampaignPreloadResourceMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *businessID;
@property (copy, nonatomic) NSString *businessKey;
@property (copy, nonatomic) NSDictionary *extraParameters;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
