@class NSString, NSNumber, NSDictionary;

@interface BDAPUSendLogParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSNumber *extValue;
@property (retain, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSDictionary *extJson;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
