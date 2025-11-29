@class NSString;

@interface AFDPrivacyManager : NSObject <AFDPrivacyManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hideMyPostTextWithUser:(id)a0;
+ (id)unhideMyPostTextWithUser:(id)a0;
+ (id)hideHerPostTextWithUser:(id)a0;
+ (id)replaceGenderTextWithText:(id)a0 user:(id)a1;
+ (id)friendTextWithUser:(id)a0;
+ (id)shortHideHerPostTextWithUser:(id)a0;
+ (id)genderTextWithUser:(id)a0;
+ (id)privateTabDataCacheRule;
+ (void)savePrivateTabDataCacheDate;
+ (id)notShowTextWithUser:(id)a0;
+ (id)notSeeTextWithUser:(id)a0;
+ (id)shortHideMyPostTextWithUser:(id)a0;
+ (id)unhideHerPostTextWithUser:(id)a0;
+ (void)refreshPrivateTabDataCacheIfNeeded;

- (BOOL)shouldShowViewerRecordGuideViewControllerWithReferString:(id)a0 user:(id)a1 isProfile:(BOOL)a2;
- (id)viewerRecordGuideViewControllerWithAweme:(id)a0 shouldUpdateBarrageAfterDismiss:(BOOL)a1 referString:(id)a2;
- (id)viewerRecordGuideViewAlert;
- (id)frequencyControlModel;
- (void)changePrivateAccountSetting:(BOOL)a0 completion:(id /* block */)a1;
- (id)viewerRecordGuideViewControllerWithUserID:(id)a0 referString:(id)a1;
- (void)showPrivacySettingGuideWithEnterFrom:(id)a0 willChangePrivateSetting:(id /* block */)a1 didChangePrivateSetting:(id /* block */)a2;

@end
