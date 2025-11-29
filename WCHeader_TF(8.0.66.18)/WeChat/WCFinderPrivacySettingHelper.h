@class WCFinderContact, NSString, FinderNewUserPrepareResponse, UIViewController;
@protocol WCFinderPrivacySettingHelperDelegate;

@interface WCFinderPrivacySettingHelper : NSObject <WCMomentsPrivacyViewControllerDelegate>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (weak, nonatomic) UIViewController *ownerVC;
@property (weak, nonatomic) id<WCFinderPrivacySettingHelperDelegate> delegate;
@property (nonatomic) int commentScene;
@property (nonatomic) long long flag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getCurrentPrivacyWithContact:(id)a0;

- (BOOL)couldDisplay;
- (void)addItemsToManager:(id)a0;
- (BOOL)canShowPrivate;
- (id)getPrivacySettingWithSection;
- (id)addRecomendSection;
- (void)_addShowInWXProflie:(id)a0;
- (id)makeSectionSeparator;
- (void)addNotRecommendCell:(id)a0;
- (void)clickVisiblePermissionCell;
- (BOOL)privacyViewController:(id)a0 canSelectPrivacySetting:(long long)a1;
- (void)privacyViewControllerDidSelectExpandableCell:(id)a0;
- (void)privacyViewController:(id)a0 didSelectPrivacy:(long long)a1 Contacts:(id)a2 contactTags:(id)a3 isAllContactsSelected:(BOOL)a4;
- (void)privacyViewControllerDidClickCancel:(id)a0;
- (BOOL)privacyViewController:(id)a0 multiSelectContactReturn:(id)a1 finished:(BOOL)a2;
- (unsigned long long)currentPrivacy;
- (void)addPrimarySwitch:(id)a0;
- (void)privateAccountSwitchChanged:(id)a0;
- (void)configRefCell:(id)a0;
- (void)addInterationCommentBulletLimitCell:(id)a0;
- (void)addInterationMsgLimitCell:(id)a0;
- (void)interationCommentBulletLimitAction;
- (void)interationMsgLimitAction;
- (id)interactionLimitDesc:(unsigned int)a0;
- (void)addAudienceMuteCell:(id)a0;
- (void)audienceMuteSwitchChanged:(id)a0;
- (void)addBlockListCell:(id)a0;
- (void)clickBlackListCell;
- (void)addRefusePrimaryMsgCell:(id)a0;
- (void)clickFollowSendMsgCell:(id)a0;
- (void)addReferenceSection:(id)a0;
- (void)addMpRefCell:(id)a0;
- (void)extractPOIInfoPermissionFromAssetCell:(id)a0;
- (void)extractPOIFromAssetPermissionChange:(id)a0;
- (void)mpRefSwitchDidChange:(id)a0;
- (void)addMiniappReferenceCell:(id)a0;
- (void)miniappReferenceSectionSwitchChanged:(id)a0;
- (void)addMJRefCell:(id)a0;
- (void)mjRefSwitchDidChange:(id)a0;
- (void)addMJPublisherMutatedContentSaveCell:(id)a0;
- (void)mjPublisherMutatedContentSwitchDidChange:(id)a0;
- (void)postAssistForNewLifeSwitchDidChange:(id)a0;
- (void)addMemtionFilterCell:(id)a0;
- (void)clickUnDisplayMentioned:(id)a0;
- (void)reportSwitchChangedWithEid:(id)a0 reportType:(long long)a1 open:(BOOL)a2;
- (id)addExportInfoSection;
- (void)clickPrivacyExportAction;
- (id)addAccountManagerSection;
- (void)openAccountSettingVC;
- (id)addGuardNowSection;
- (BOOL)isGuardNowOpened;
- (void)_configCellEnableForGuardNow:(id)a0;
- (void)_addGuardNowStatsLabelToHeader:(id)a0;
- (void)onClickGuardNow;
- (void).cxx_destruct;

@end
