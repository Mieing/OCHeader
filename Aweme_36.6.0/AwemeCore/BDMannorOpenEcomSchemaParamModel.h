@class NSString, NSDictionary;

@interface BDMannorOpenEcomSchemaParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
