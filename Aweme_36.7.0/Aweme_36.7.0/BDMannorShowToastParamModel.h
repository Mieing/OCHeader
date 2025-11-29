@class NSString;

@interface BDMannorShowToastParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *icon;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
