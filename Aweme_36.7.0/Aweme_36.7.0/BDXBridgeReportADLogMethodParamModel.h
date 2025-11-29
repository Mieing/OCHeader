@class NSString, NSDictionary;

@interface BDXBridgeReportADLogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
