@class NSDictionary, NSArray;

@interface SECWebSecLinkParamsHandlerSettings : NSObject

@property (copy, nonatomic) NSDictionary *sqrHasLandingInjectEnableDict;
@property (copy, nonatomic) NSDictionary *sqrHasLandingInjectSceneMatchDict;
@property (copy, nonatomic) NSDictionary *schemaParamKeysDict;
@property (copy, nonatomic) NSArray *sceneCommonParamKeys;
@property (copy, nonatomic) NSDictionary *sceneUniqueParamKeysDict;

+ (id)sharedSettings;

- (void).cxx_destruct;

@end
