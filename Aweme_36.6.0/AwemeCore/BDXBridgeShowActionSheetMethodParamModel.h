@class NSString, NSArray;

@interface BDXBridgeShowActionSheetMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *actions;

+ (id)requiredKeyPaths;
+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
