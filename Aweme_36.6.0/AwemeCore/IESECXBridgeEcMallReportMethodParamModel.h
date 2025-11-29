@class NSString, NSDictionary;

@interface IESECXBridgeEcMallReportMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *trackDataKey;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *filterInfo;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
