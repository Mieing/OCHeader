@interface AWEMayDayBridgeCheckInstallAppMethodResultModel : BDXBridgeModel

@property (nonatomic) long long status;

+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
