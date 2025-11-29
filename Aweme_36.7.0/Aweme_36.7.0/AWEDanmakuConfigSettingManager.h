@class NSMutableDictionary, NSString, AWEDanmakuActivityConfigModel, AWEVideoPlayDanmakuModel, NSMutableArray, AWEPlayInteractionDanmakuStylesInfo;

@interface AWEDanmakuConfigSettingManager : NSObject <AWEUserMessage, AWEDanmakuSettingManagerProtocol>

@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *verticalStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *landscapeStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *verticalDefaultStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *landScapeDefaultStylesInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *remoteVerticalResponseInfo;
@property (retain, nonatomic) AWEPlayInteractionDanmakuStylesInfo *remotelandScapeResponseInfo;
@property (nonatomic) BOOL hasTrackVerticalDanmakuSetting;
@property (retain, nonatomic) NSMutableDictionary *followStatusChangeDict;
@property (nonatomic) BOOL hasRequestConfGet;
@property (copy, nonatomic) id /* block */ requestConfGetSuccessBlock;
@property (retain, nonatomic) NSMutableArray *danmakuMaterialNames;
@property (retain, nonatomic) AWEDanmakuActivityConfigModel *danmakuActivityConfig;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *lastDislikeDanmakuModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)fetchDanmakuConfigUrl;
+ (id)updateDanmakuConfigUrl;
+ (id)danmakuPriorityOrder;
+ (long long)maxShieldWord;
+ (id)reportDanmakuIDs;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)userChangedFrom:(id)a0 to:(id)a1;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)aAWEPadModuleAdapter;
- (void)updateSwitchOn:(BOOL)a0 danmakuScene:(unsigned long long)a1 groupID:(id)a2;
- (id)getRequestLogID:(id)a0;
- (void)requestDanmakuSettingsForNextEffectiveIfNeed;
- (void)configTrackDanmakuSettingData;
- (id)loadVerticalDanmakuSettingsCache;
- (id)loadLandScapeDanmakuSettingsCache;
- (id)defaultDanmakuSettingForScene:(unsigned long long)a0;
- (BOOL)needFetchDanmakuSetting;
- (void)requestDanmakuSettings;
- (void)configDanmakuConfigFromCacheIfNeed;
- (void)updateDanmakuFontSize:(unsigned long long)a0 danmakuScene:(unsigned long long)a1;
- (void)requestDanmakuSettingsForNextEffective;
- (void)updateDanmakuAlpha:(double)a0 danmakuScene:(unsigned long long)a1;
- (void)updateDanmakuShootSpeed:(unsigned long long)a0 danmakuScene:(unsigned long long)a1;
- (void)updateVerticalDanmakuSettingsCache:(id)a0;
- (void)updateLandScapeDanmakuSettingsCache:(id)a0;
- (void)danmakuConfigRequestWithParams:(id)a0 nextTimeEffect:(BOOL)a1;
- (void)updateDanmakuCacheSettingIfNeed:(id)a0 danmakuScene:(unsigned long long)a1;
- (BOOL)enableDiffDefaultLineCount:(unsigned long long)a0;
- (void)uploadDanmakuSettingsIfNeed:(unsigned long long)a0;
- (BOOL)updateFakeCloseSwitchIfNeed:(BOOL)a0 danmakuScene:(unsigned long long)a1 groupID:(id)a2 source:(long long)a3;
- (void)updateSwitchOn:(BOOL)a0 danmakuScene:(unsigned long long)a1;
- (void)awe_uploadDanmakuShieldIfNeed;
- (void)uploadDanmakuSettingsWithParams:(id)a0;
- (BOOL)uploadVerticalSettingsWithDefaultInfo:(unsigned long long)a0;
- (void)updateGlobalSwitchOn:(BOOL)a0 danmakuScene:(unsigned long long)a1 groupID:(id)a2;
- (void)uploadDanmakuShieldIfNeed;
- (void)resetDefaultDanmakuSettingForScene:(unsigned long long)a0;
- (BOOL)enableDanmakuCacheRemove;
- (void)updateDanmakuSmartModeOn:(BOOL)a0;
- (void)updateDanmakuDisplayArea:(unsigned long long)a0 danmakuScene:(unsigned long long)a1;
- (void)awe_updateShieldSwitch:(BOOL)a0;
- (void)awe_updateShieldWords:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
