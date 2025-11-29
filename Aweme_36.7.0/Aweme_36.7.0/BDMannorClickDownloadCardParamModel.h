@class NSString, NSDictionary;

@interface BDMannorClickDownloadCardParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSDictionary *extParam;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
