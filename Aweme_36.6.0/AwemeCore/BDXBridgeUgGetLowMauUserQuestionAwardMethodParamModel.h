@class NSString;

@interface BDXBridgeUgGetLowMauUserQuestionAwardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *item_id;
@property (copy, nonatomic) NSString *ug_id;
@property (copy, nonatomic) NSString *task_id;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
