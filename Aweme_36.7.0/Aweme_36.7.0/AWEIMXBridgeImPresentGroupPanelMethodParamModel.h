@class NSString, NSDictionary;

@interface AWEIMXBridgeImPresentGroupPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *groupChatPanelType;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (copy, nonatomic) NSDictionary *bizExtension;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
