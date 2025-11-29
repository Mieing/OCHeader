@interface AWEIMUserPrivacyGetAliasCommonScene : NSObject

@property (nonatomic) unsigned long long commonSceneValue;
@property (nonatomic) unsigned long long aliasScene;

+ (id)__commonSceneTrackWhiteList;
+ (id)__commonSceneValueToNameDictionary;
+ (id)__privacyConfigMap;
+ (id)__commonSceneShowBlackList;
+ (id)__sceneToCommonSceneDictionary;

- (id)initWithLocalScene:(unsigned long long)a0;
- (unsigned long long)__commonSceneEnumFromScene:(unsigned long long)a0;
- (BOOL)__banedInSetting;
- (id)displayOrder;
- (BOOL)shouldTrack;
- (BOOL)shouldShow;
- (id)trackName;

@end
