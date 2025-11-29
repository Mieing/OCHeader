@class NSString, NSDictionary;

@interface BDXMonitorBridgeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
