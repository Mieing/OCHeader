@class NSString, NSDictionary;

@interface AWEIMXBridgeImPresentJoinGroupPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *groupChatPanelType;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (copy, nonatomic) NSDictionary *bizExtension;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
