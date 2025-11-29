@class NSString, NSDictionary;

@interface BDXBridgeOpenPlatformReportMiniAppBatchLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSDictionary *eventInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
