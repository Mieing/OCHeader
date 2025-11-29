@class NSMutableDictionary, NSString, LiveKTVAudioSettingCacheInfo, LiveLandscapeBarrageDisplaySettingInfo;

@interface MMLiveSettingData : MMObject <PBCoding>

@property (nonatomic) BOOL isPolicyForAnchorConfirmed;
@property (nonatomic) BOOL isPolicyForAudienceConfirmed;
@property (retain, nonatomic) NSMutableDictionary *attendLotteryIdCache;
@property (retain, nonatomic) NSMutableDictionary *followStateIdCache;
@property (retain, nonatomic) NSMutableDictionary *liveGiftEffectSettingCache;
@property (retain, nonatomic) NSMutableDictionary *liveChooseClarityCache;
@property (nonatomic) BOOL isFinderLivePolicyForAudienceConfirmed;
@property (retain, nonatomic) NSMutableDictionary *subTitleSwitchCache;
@property (retain, nonatomic) LiveLandscapeBarrageDisplaySettingInfo *landscapeBarrageDisplaySetting;
@property (retain, nonatomic) NSMutableDictionary *newedCustomMagicEngineResTagCache;
@property (retain, nonatomic) LiveKTVAudioSettingCacheInfo *ktvAudioSettingCacheInfo;
@property (retain, nonatomic) LiveKTVAudioSettingCacheInfo *ktvAudioSettingCacheInfoNew;
@property (retain, nonatomic) LiveKTVAudioSettingCacheInfo *ktvAudioSettingCacheInfoV2;
@property (nonatomic) BOOL isLiveAnchorWeakNetOptimizationEnabled;
@property (nonatomic) BOOL isLiveAudienceWeakNetOptimizationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isPolicyForAnchorConfirmed;
+ (void)PBArrayAdd_isPolicyForAudienceConfirmed;
+ (void)PBArrayAdd_attendLotteryIdCache;
+ (void)PBArrayAdd_followStateIdCache;
+ (void)PBArrayAdd_liveGiftEffectSettingCache;
+ (void)PBArrayAdd_liveChooseClarityCache;
+ (void)PBArrayAdd_isFinderLivePolicyForAudienceConfirmed;
+ (void)PBArrayAdd_subTitleSwitchCache;
+ (void)PBArrayAdd_landscapeBarrageDisplaySetting;
+ (void)PBArrayAdd_newedCustomMagicEngineResTagCache;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfo;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfoNew;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfoV2;
+ (void)PBArrayAdd_isLiveAnchorWeakNetOptimizationEnabled;
+ (void)PBArrayAdd_isLiveAudienceWeakNetOptimizationEnabled;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
