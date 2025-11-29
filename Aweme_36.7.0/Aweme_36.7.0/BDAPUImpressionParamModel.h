@class NSString, NSDictionary;

@interface BDAPUImpressionParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *SKANParameters;
@property (copy, nonatomic) NSDictionary *eventParameters;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
