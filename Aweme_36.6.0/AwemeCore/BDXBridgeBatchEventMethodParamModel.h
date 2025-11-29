@class NSString, NSArray;

@interface BDXBridgeBatchEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSArray *actionList;

+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
