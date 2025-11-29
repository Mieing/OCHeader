@class NSString;

@interface AWEAntiAddictNoticeModuleService : HTSService <AWEAntiAddictNoticeModuleService>

@property (nonatomic) long long remindToRest;
@property (nonatomic) long long remindToSleep;
@property (nonatomic) long long addictRemindState;
@property (nonatomic) long long delayRemindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)antiAddictMaskHpContainerController;

- (id)chimeVideo;
- (id)feedAntiRequestParams;
- (BOOL)isMaskShowing;
- (BOOL)isTimeLockShowing;
- (void)fetchUserAntiAddictNoticeSettingSceneType:(long long)a0;
- (id)getAnitAddictCurrentRestVideoInfoModel;
- (id)getAnitAddictCurrentSleepVideoInfoModel;
- (id)getAnitAddictActivityInfoModelList;
- (id)getAntiAddictNormalMaskModel;
- (double)antiAddictionDayTime;
- (double)antiAddictionNightTime;
- (double)antiAddictVideoRetraceInterval;
- (id)antiAddictMaskMaterialManager;
- (BOOL)isAntiAddictAlertShowing;
- (BOOL)enableAntiAddict;
- (id)natureUseDurationInTwoWeeks;
- (void)feedDidDisplayMask:(id)a0;
- (void)feedDidEndDisplayMask:(id)a0;
- (id)feedMaskMainText:(id)a0;
- (id)feedMaskSubText:(id)a0;
- (id)feedMaskEnterText:(id)a0;
- (id)feedMaskExitText:(id)a0;
- (id)feedMaskLaterRemindText:(id)a0;
- (void)avoidTime:(long long)a0;
- (void)feedInsertedAntiAddictVideo:(id)a0 willDisplayImmediately:(BOOL)a1;
- (void)invalidThreadSyncIndexWithReason:(id)a0;
- (BOOL)isDayOfSystemMask;
- (BOOL)isDayOfForceMask;
- (id)forceMaskMainTitle;
- (id)officialMaskIdList;
- (id)timeManagementBubbleManager;
- (id)insetsLabel;
- (id)contentPreferenceManager;
- (id)tagViewWithTitle:(id)a0 clickBlock:(id /* block */)a1;
- (void)cacheAntiAddictVideoModel:(id)a0;
- (long long)antiAddictMaskStyle;
- (BOOL)useAntiAddictModernCell;
- (void)recordRemindLaterInfo;
- (id)antiAddictManager;
- (id)requestParams;

@end
