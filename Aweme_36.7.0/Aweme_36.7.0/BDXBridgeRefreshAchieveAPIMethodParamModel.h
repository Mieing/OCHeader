@class NSString;

@interface BDXBridgeRefreshAchieveAPIMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *conversationShortID;
@property (nonatomic) long long scene;

+ (id)requiredKeyPaths;
+ (id)sceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
