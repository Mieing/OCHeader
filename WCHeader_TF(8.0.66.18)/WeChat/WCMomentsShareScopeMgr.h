@class WCDataItem, WCMomentsPrivacyViewController, WCMomentsShareScopeViewController, MMUIViewController, SnsObjectOpChangeVisibility, NSString;

@interface WCMomentsShareScopeMgr : NSObject <WCMomentsPrivacyViewControllerDelegate, WCFacadeExt, WCMomentsShareScopeViewControllerDelegate>

@property (retain, nonatomic) WCMomentsShareScopeViewController *shareScopeVC;
@property (weak, nonatomic) MMUIViewController *shareScopeParentVC;
@property (retain, nonatomic) WCDataItem *openDataItem;
@property (nonatomic) BOOL isRequestContactDataForOpening;
@property (retain, nonatomic) WCMomentsPrivacyViewController *privacyVC;
@property (retain, nonatomic) WCDataItem *modifyDataItem;
@property (retain, nonatomic) SnsObjectOpChangeVisibility *changeVisibilityOp;
@property (nonatomic) BOOL isRequestContactDataForModifying;
@property (nonatomic) BOOL isModifyFromShareScopeVC;
@property (nonatomic) unsigned long long modifyShareScopeEnterScene;
@property (nonatomic) BOOL isModifyShareScopeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)openShareScopeWithDataItem:(id)a0 viewController:(id)a1;
- (void)modifyShareScopeWithDataItem:(id)a0 viewController:(id)a1;
- (void)_openShareScopeWithDataItem:(id)a0 isNeedForceUpdate:(BOOL)a1;
- (id)_changeVisibilityOpWithPrivacy:(long long)a0 contactTags:(id)a1 contacts:(id)a2;
- (void)_modifyShareScopeIfNeeded;
- (void)_onModifyPrvicyExceedLimitDuration;
- (void)_updatePrivacyVCWithDataItem:(id)a0;
- (id)_createPrivacyParamsWithDataItem:(id)a0;
- (void)_handleModifyDataItemFinishedWithResult:(BOOL)a0;
- (void)_handleUpdateDataItemDetailFinished:(long long)a0 itemId:(id)a1 dataItem:(id)a2;
- (BOOL)_isPrivacyChangedWithPrivacy:(long long)a0 newTags:(id)a1 newContacts:(id)a2;
- (void)_clearData;
- (void)_clearOpenShareScopeData;
- (void)_clearModifyShareScopeData;
- (unsigned long long)modifyShareScopeEnterSceneWithVC:(id)a0;
- (void)privacyViewController:(id)a0 didSelectPrivacy:(long long)a1 Contacts:(id)a2 contactTags:(id)a3 isAllContactsSelected:(BOOL)a4;
- (void)privacyViewControllerDidClickCancel:(id)a0;
- (BOOL)privacyViewController:(id)a0 canSelectPrivacySetting:(long long)a1;
- (void)onClickCell:(unsigned long long)a0;
- (void)onUpdateDataItemDetailFinished:(long long)a0 itemId:(id)a1 dataItem:(id)a2;
- (void)onModifyDataItemShareScopeFinished:(long long)a0 dataItemID:(id)a1;
- (void)onSnsNewCommitFinished:(id)a0 task:(id)a1;
- (void)onUploadTaskDidFail:(id)a0;
- (void)shareScopeViewController:(id)a0 didClickModifyScopeButton:(id)a1;
- (id)shareScopeViewControllerGetPresentingVC:(id)a0;
- (void)onClickTagGroup:(unsigned int)a0;
- (void)onClickUserName:(id)a0;
- (void)resetEditBehaviorReporter;
- (void).cxx_destruct;

@end
