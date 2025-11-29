@class NSArray, NSDictionary, NSString, NSDate;

@interface IESClearSceneManager : NSObject <IESClearSceneInterface, IESLiveTrackerDelegate>

@property (nonatomic) BOOL isClear;
@property (nonatomic) BOOL isLandscapeClear;
@property (nonatomic) long long powerSaveClearType;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *pureStartTime;
@property (retain, nonatomic) NSDate *simplifyStartTime;
@property (retain, nonatomic) NSArray *popupItemAllowList;
@property (retain, nonatomic) NSArray *popupAllowList;
@property (retain, nonatomic) NSDictionary *multiTabSetting;
@property (nonatomic) BOOL isMediaClear;
@property (nonatomic) long long cleanMode;
@property (retain, nonatomic) NSArray *cleanAllowList;
@property (nonatomic) double pureCleanDuration;
@property (nonatomic) double simplifyCleanDuration;
@property (nonatomic) BOOL disableGiftEffect;
@property (nonatomic) BOOL isCleanShouldPan;
@property (nonatomic) BOOL isCleanPanning;
@property (nonatomic) BOOL isPinching;
@property (nonatomic) BOOL isEnlargeMode;
@property (nonatomic) long long enterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didSetAttachingDIContext;
- (id)enterTypeString;
- (double)clearDuration;
- (void)setClearStatus:(BOOL)a0;
- (void)setLandscapeClearStatus:(BOOL)a0;
- (void)setLandscapeClearStatus:(BOOL)a0 effectUI:(BOOL)a1;
- (long long)clearCardStatus;
- (long long)clearItemStatus;
- (BOOL)isPowerSaveClear;
- (BOOL)cleanShouldPan;
- (void)setMediaClearStatus:(BOOL)a0;
- (BOOL)isMediaClearStatus;
- (BOOL)isPinchingStatus;
- (void)setPinchingStatus:(BOOL)a0;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (BOOL)disableClean;
- (id)p_typeStringFromType:(long long)a0;
- (void)sendMessage:(id)a0 value:(id)a1;
- (void)showRightBottomComponentsIfNeed;
- (void)hideRightBottomComponentsIfNeed;
- (id)landscapeEnableHookTrackers;
- (void)enableCleanStatus;
- (BOOL)needToHideProfileView;
- (BOOL)enableCleanOptAndGuideAnimation;
- (BOOL)enableCleanGuideViewInLowPowerMode;
- (BOOL)enableEnlargeByPinch;
- (BOOL)enableExitButtonOptimize;
- (long long)p_cleanScreenOptimizeConfig;
- (BOOL)enableCleanByTap;
- (BOOL)disableCleanByMultiTab;
- (BOOL)shouldFilterTapArea;
- (BOOL)p_isInPopContainer:(id)a0;
- (BOOL)p_isInpopupItemAllowList:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
