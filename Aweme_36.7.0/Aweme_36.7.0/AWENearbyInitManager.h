@class NSString, AWENearbyInitModel;

@interface AWENearbyInitManager : NSObject <AWESettingsComboRequestProtocol, AWENearbyInitManagerProtocol>

@property (retain, nonatomic) AWENearbyInitModel *fenceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)nearbyIsCardFeed;
+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (id)transformStorageKeyWithPageType:(long long)a0 key:(id)a1;
+ (id)handleDualSearchBarSettingWithPageType:(long long)a0;
+ (BOOL)nearbyTabSkipRequestTransformer;
+ (id)handleTransformerTransParam:(long long)a0;
+ (id)nearbyCapsuleText;
+ (unsigned long long)dualModeForGuideSetting;
+ (id)nearbyForGuideCityCodeList;
+ (BOOL)registGuideIMP;
+ (void)requestNearbyInitWithCompletion:(id /* block */)a0;
+ (id)firstGuideModelWithPageType:(long long)a0;
+ (id)secondGuideModelWithPageType:(long long)a0;
+ (id)offlineGuideModel;
+ (id)grouponHalfScreenPOIBlockInfo;
+ (BOOL)currentNearbyIsCardFeed;
+ (BOOL)nearbyIsOversea;
+ (id)kAWENearbyInitNearbybSkipRequestTransformerKey;
+ (id)kAWENearbyInitNearbyTransformerFirstGuideModelKey;
+ (id)kAWENearbyInitOfflineTransformerModelKey;
+ (id)kAWENearbyInitTransformerTransParamKey;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)handleDualABParamsWithPageType:(long long)a0;
- (unsigned long long)currNearbyFeedDualModel;
- (BOOL)enableSwitchBtn;
- (BOOL)isTransformerMergeCard;
- (id)collectInitInfo;
- (long long)grouponPageStyle;
- (BOOL)grouponMultiTabEnable;
- (void)updateTabStatus;
- (void)updateSkipRequestTransformer:(BOOL)a0;
- (void)updateCollectInitInfo:(id)a0;
- (void)updateMultipEnable:(BOOL)a0 pageStyle:(unsigned long long)a1;
- (void)handleFrenceModel:(id)a0 isRetry:(BOOL)a1;
- (id)reqParams;
- (id)dualSwitchBtnGuideRule;
- (id)fullSwitchBtnGuideRule;
- (unsigned long long)forceUseServerSwitchBtn;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObserver;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
