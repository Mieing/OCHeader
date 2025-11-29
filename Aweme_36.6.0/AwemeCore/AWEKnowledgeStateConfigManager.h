@class AWEKnowledgeStateConfig, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AWEKnowledgeStateConfigManager : NSObject

@property (retain, nonatomic) AWEKnowledgeStateConfig *stateConfig;
@property (copy, nonatomic) NSArray *enableScene;
@property (copy, nonatomic) NSArray *enableUpdatePlayoutConfigScene;
@property (copy, nonatomic) NSArray *quickStartScene;
@property (copy, nonatomic) NSDictionary *quickStartActionConfig;
@property (retain, nonatomic) NSMutableDictionary *jsonStrInjectConfig;
@property (retain, nonatomic) NSMutableDictionary *nativeInjectConfig;
@property (retain, nonatomic) NSMutableDictionary *lastStates;
@property (nonatomic) BOOL firstTimeSetup;
@property (copy, nonatomic) NSString *versionCode;

+ (id)sharedManager;

- (void)updatePlayoutWithJSONString:(id)a0 forScene:(id)a1;
- (BOOL)updatePlayoutConfigIfNeededForPayload:(id)a0;
- (BOOL)updatePlayoutConfigIfNeededForRichContentContainer:(id)a0 forScene:(id)a1 withModel:(id)a2;
- (void)updateLastState:(id)a0 forScene:(id)a1;
- (BOOL)enableWithScene:(id)a0;
- (id)sceneConfigForScene:(id)a0;
- (void)updatePlayoutConfig:(id)a0 forScene:(id)a1;
- (BOOL)enableUpdatePlayoutConfigWithScene:(id)a0;
- (id)playoutInitialResultForConfig:(id)a0 withModel:(id)a1;
- (id)sceneConfigDicForScene:(id)a0;
- (id)createConfigModelForScene:(id)a0 withConfigDic:(id)a1;
- (id)configDicFromLocal;
- (BOOL)setupConfigForDic:(id)a0;
- (id)configDicFromAb;
- (BOOL)isAvailableVersion:(id)a0;
- (unsigned long long)versionNumberForString:(id)a0;
- (unsigned long long)currentAppVersion;
- (void)forceLoadLocalConfig;
- (BOOL)shouldQuickStartWithScene:(id)a0;
- (void).cxx_destruct;
- (id)currentConfig;

@end
