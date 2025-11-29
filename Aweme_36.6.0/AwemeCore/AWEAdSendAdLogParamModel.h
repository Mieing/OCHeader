@class NSString, NSNumber, NSDictionary;

@interface AWEAdSendAdLogParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) NSNumber *hasAdInfo;
@property (copy, nonatomic) NSDictionary *extParam;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
