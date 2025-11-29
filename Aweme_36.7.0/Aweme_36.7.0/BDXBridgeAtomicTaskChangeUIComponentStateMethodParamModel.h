@class NSString, NSNumber;

@interface BDXBridgeAtomicTaskChangeUIComponentStateMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *ui_component_id;
@property (copy, nonatomic) NSString *ui_component_type;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *page_type;
@property (retain, nonatomic) NSNumber *cold_limit;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
