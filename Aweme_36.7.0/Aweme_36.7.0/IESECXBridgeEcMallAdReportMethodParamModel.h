@class NSString, NSNumber, NSDictionary;

@interface IESECXBridgeEcMallAdReportMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSNumber *section;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSDictionary *adExtraData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
