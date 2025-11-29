@class MMLoadingView, NSString, CContact, MMHDHeadImageView, UIView, UILabel, MMHeadImageView;
@protocol ContactInfoAssistDelegate;

@interface CBaseContactInfoAssist : MMObject <contactVerifyLogicDelegate, IContactMgrExt, WCActionSheetDelegate, PBMessageObserverDelegate> {
    UIView *m_headerView;
    UIView *m_footerView;
    MMHDHeadImageView *m_HDHeadView;
    MMLoadingView *m_loadingView;
    UILabel *m_displayNameLabel;
    UILabel *m_userNameLabel;
}

@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) CContact *m_contact;
@property (weak, nonatomic) id<ContactInfoAssistDelegate> m_delegate;
@property (retain, nonatomic) MMHeadImageView *m_headView;
@property (nonatomic) unsigned int m_uiFromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear;
- (void)updateNickNameLabel;
- (void)updateFooterView;
- (void)profileDestory;
- (void)opShareMyFriend;
- (void)onShareMyFriendDone:(id)a0;
- (void)updateInstallStateAndReloadTableView;
- (id)getUserNameCol;
- (void)initUserNameLabel;
- (void)initNickNameLabel;
- (void)reloadTableView;
- (void)reloadNavigationBarItem;
- (void)reloadView;
- (BOOL)isInMyContactList;
- (void)doAddContact;
- (void)modifyVerifyContactWrap:(id)a0;
- (void)onAddToContacts;
- (void)onContactVerifyFillVerifyMsg:(id)a0;
- (void)handleAddedContact;
- (void)contactAddContactOk:(id)a0;
- (void)stopLoading;
- (id)GetTableView;
- (id)GetMainScrollView;
- (id)getFooterView;
- (void)dealloc;
- (double)getSignatureWidth;
- (void)makeContactIntroCell:(id)a0 text:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onContactUpdated;
- (void)baseViewWillBePoped;
- (id)navigationBarBackgroundColor;
- (id)navigationBarItemColor;
- (BOOL)shouldForceHideNavigationBarSepLine;
- (BOOL)shouldFobidPopWhenDeleteContact;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)reportContactInfoViewEnter;
- (BOOL)isSeachActive;
- (BOOL)isInteractivePopEnabled;
- (BOOL)isChatRoom;
- (double)getTableViewTopInset;
- (long long)transferFromSceneToSourceScene;
- (void).cxx_destruct;

@end
