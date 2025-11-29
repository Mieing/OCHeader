@interface BDXBridgeShowModalMethodResultModel : BDXBridgeModel

@property (nonatomic) unsigned long long action;

+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
