@class NSNumber, NSString, NSDictionary;

@interface PIAXBridgePiaInternalTriggerMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
