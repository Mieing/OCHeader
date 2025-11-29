@class WCMomentsPrivacyViewController, WCMomentsShareScopeViewController, MMUIViewController, TextStateModel, TextStateCardReporter, NSString;

@interface TextStatePrivacyMgr : NSObject <WCMomentsPrivacyViewControllerDelegate, WCMomentsShareScopeViewControllerDelegate, WCFacadeExt>

@property (retain, nonatomic) WCMomentsShareScopeViewController *shareScopeVC;
@property (weak, nonatomic) MMUIViewController *shareScopeParentVC;
@property (weak, nonatomic) TextStateCardReporter *cardReporter;
@property (retain, nonatomic) TextStateModel *openDataItem;
@property (nonatomic) BOOL isRequestContactDataForOpening;
@property (retain, nonatomic) WCMomentsPrivacyViewController *privacyVC;
@property (nonatomic) BOOL isRequestContactDataForModifying;
@property (nonatomic) BOOL isModifyFromShareScopeVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)statusPrivacy2WCPostPrivacy:(long long)a0;
+ (long long)wcPostPrivacy2StatusPrivacy:(long long)a0;
+ (BOOL)areArrayEqualIgnoringOrder:(id)a0 newArray:(id)a1;

- (id)init;
- (void)dealloc;
- (void)openShareScopeWithDataItem:(id)a0 viewController:(id)a1 cardReporter:(id)a2;
- (void)modifyShareScopeWithDataItem:(id)a0 viewController:(id)a1;
- (void)_openShareScopeWithDataItem:(id)a0 isNeedForceUpdate:(BOOL)a1;
- (void)_updatePrivacyVCWithDataItem:(id)a0;
- (id)_createPrivacyParamsWithDataItem:(id)a0;
- (void)_handleModifyDataItemFinishedWithResult:(BOOL)a0;
- (BOOL)_isPrivacyChangedWithPrivacy:(long long)a0 newTags:(id)a1 newContacts:(id)a2;
- (void)_clearData;
- (void)_clearOpenShareScopeData;
- (void)_clearModifyShareScopeData;
- (void)privacyViewController:(id)a0 didSelectPrivacy:(long long)a1 Contacts:(id)a2 contactTags:(id)a3 isAllContactsSelected:(BOOL)a4;
- (void)privacyViewControllerDidClickCancel:(id)a0;
- (BOOL)privacyViewController:(id)a0 canSelectPrivacySetting:(long long)a1;
- (void)onClickCell:(unsigned long long)a0;
- (void)shareScopeViewController:(id)a0 didClickModifyScopeButton:(id)a1;
- (id)shareScopeViewControllerGetPresentingVC:(id)a0;
- (void)onClickTagGroup:(unsigned int)a0;
- (void)onClickUserName:(id)a0;
- (void).cxx_destruct;

@end
