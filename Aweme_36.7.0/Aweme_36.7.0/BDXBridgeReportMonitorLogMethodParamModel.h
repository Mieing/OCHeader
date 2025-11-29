@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeReportMonitorLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSDictionary *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
