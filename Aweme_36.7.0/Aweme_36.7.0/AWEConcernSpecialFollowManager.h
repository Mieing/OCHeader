@class NSString, NSDictionary;

@interface AWEConcernSpecialFollowManager : NSObject <AWEUserMessage, AWEConcernSpecialFollowManagerProtocol>

@property (nonatomic) BOOL specialFollowEnable;
@property (nonatomic) BOOL specialFollowAvatarEntranceEnable;
@property (nonatomic) BOOL specialFollowAdaptUnreadEnable;
@property (nonatomic) BOOL specialFollowOftenWatchTextEnable;
@property (retain, nonatomic) NSString *specialFollowText;
@property (nonatomic) long long feedElementMissCount;
@property (nonatomic) long long feedElementContinuousMissCount;
@property (nonatomic) long long detailElementAuthorShowMaxCount;
@property (nonatomic) long long continuousMissedCount;
@property (retain, nonatomic) NSDictionary *missCountDic;
@property (retain, nonatomic) NSDictionary *hadShowAuthorDic;
@property (retain, nonatomic) NSDictionary *showedAuthorInDetailDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hadShowMaxCountWithoutGecko;
+ (BOOL)hadShowSpecialFollowGuidePanel;
+ (void)recordShowSpecialFollowGuide;
+ (id)guideViewNoticeKey;
+ (id)noGeckoResourceGuideViewNoticeKey;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)trackSpecialFollowShowEntranceWithUserID:(id)a0 enterFrom:(id)a1 entrancePosition:(unsigned long long)a2;
- (void)specialFollowUser:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)cancelSpecialFollowUser:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)configStorageValue;
- (id)specialFollowSettingsScenes;
- (id)specialFollowElementAppearScenes;
- (BOOL)canShowSpecialFollowSettingsWithUserModel:(id)a0 referString:(id)a1;
- (BOOL)hadMissTooMuchToNotShow;
- (BOOL)hadMissTooMuchNotShowIn24H;
- (BOOL)hadShowAuthorWithUserID:(id)a0;
- (id)addSpecialFollowAppearScenes;
- (BOOL)canShowAddSpecialFollowWithUserID:(id)a0;
- (BOOL)canShowGuidePanelWithType:(unsigned long long)a0;
- (void)addSpecialFollowStorageWithUserID:(id)a0;
- (id)errorMessageWithErrorCode:(long long)a0 defaultText:(id)a1;
- (void)trackSpecialFollowToastShowWithText:(id)a0;
- (void)removeSpecialFollowStorageWithUserID:(id)a0;
- (id)specialFollowStorageKey;
- (void)resetSepecialFollowStorageWithUserIDs:(id)a0;
- (id)todayString;
- (id)specialFollowContinuousMissCountKey;
- (id)specialFollowMissCountAndDateKey;
- (id)specialFollowShowedAuthorsKey;
- (id)addSpecialFollowShowedAuthorKey;
- (unsigned long long)followPanelPostionFromMenuShowMethod:(unsigned long long)a0;
- (BOOL)canShowAvatarEntranceWithReferString:(id)a0 enterFrom:(id)a1 specialFollowStatus:(long long)a2;
- (BOOL)shouldShowSpecialFollowElementWithUserModel:(id)a0 referString:(id)a1;
- (void)recordContinuousMissSpecialFollowCount;
- (void)recordMissCountAndDate;
- (void)clearContinuousMissSpecialFollowCount;
- (void)recordShowSpecialFollowElementWithUserID:(id)a0;
- (BOOL)shouldShowAddSpecialFollowElementWithUserModel:(id)a0 referString:(id)a1;
- (void)recordShowAddSpecialFollowWithUserID:(id)a0;
- (void)closeRecommendSpecialFollowUserID:(id)a0;
- (id)specialFollowYellowDotText;
- (id)specialFollowTextWithScenes:(unsigned long long)a0 defaultText:(id)a1;
- (id)topPinedOfflineToastTextWithUser:(id)a0;
- (BOOL)presentSpecialFollowGuidePanelIfNeededWithType:(unsigned long long)a0 userModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
- (BOOL)isSpecialFollowInStorageWithUserID:(id)a0;
- (void)trackSpecialFollowShowEntranceWithUserID:(id)a0 enterFrom:(id)a1 menuShowMethod:(unsigned long long)a2;
- (id)playerTrackPramasWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
