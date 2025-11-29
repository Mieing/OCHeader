@class NewDesignContactQRCodeInfo, NSString, InviteFriendLogic, FindContactSearchViewCellInfo, NewPersonalQRCodeViewController, MMTableViewInfo, CrossfadeAnimationController;

@interface AddFriendEntryViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate, IMMQRCodeExt, NewPersonalQRCodeViewDelegate, MMTableViewInfoDelegate, InviteFriendLogicDelegate> {
    FindContactSearchViewCellInfo *m_headerSearchView;
    NewPersonalQRCodeViewController *m_myQRCodeCard;
    MMTableViewInfo *m_tableViewInfo;
    CrossfadeAnimationController *m_transitionInstance;
    InviteFriendLogic *m_inviteLogic;
}

@property (retain, nonatomic) NewDesignContactQRCodeInfo *colorQrCodeInfo;
@property (retain, nonatomic) NewDesignContactQRCodeInfo *whiteQrCodeInfo;
@property (retain, nonatomic) NewDesignContactQRCodeInfo *blackQrCodeInfo;
@property (nonatomic) unsigned int pageMode;
@property (retain, nonatomic) NSString *m_sessionId;
@property (retain, nonatomic) NSString *m_nsUserNameToFind;
@property (nonatomic) BOOL m_bShowInvite;
@property (nonatomic) unsigned int searchScene;
@property (nonatomic) unsigned int inviteScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupReportFriendsAddData;
- (void)reportClickFriendsAddSearchAccountButton;
- (void)reportClickFriendsAddScanFriendQRButton;
- (void)reportClickFriendsAddMobileContactsButton;
- (void)reportClickFriendsAddRadarAddButton;
- (void)reportClickFriendsAddWecomContactsButton;
- (void)reportClickFriendsAddFace2faceJoinGroupButton;
- (void)reportClickFriendsAddOfficialAccountsButton;
- (void)reportClickFriendsAddServiceAccountButton;
- (void)reportClickFriendsAddMyQRCodeButton;
- (void)reportClickFriendsAddSearchTrigger;
- (void)reportClickFriendsAddActionButton:(id)a0;
- (void)pluginsChanged:(id)a0;
- (void)onShowMyQrCode;
- (void)onShowInviteList:(id)a0;
- (void)makeSearchBarCell:(id)a0;
- (void)makeQRCodeCell:(id)a0 CellInfo:(id)a1;
- (void)onClickSearchCell:(id)a0;
- (void)onQRButtonClicked;
- (void)reloadData;
- (id)init;
- (void)dealloc;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (id)codeImageForPageMode:(unsigned int)a0;
- (void)resetQrCodeInfo;
- (void)onSelectCell:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateViewWhenSelectTab:(BOOL)a0;
- (void)initTableView;
- (void)initTitle;
- (void)initView;
- (void)initLeftButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)onCancel:(id)a0;
- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)onRadarSearchViewShow;
- (void)onRadarSearchCreateViewShow;
- (id)getVCWithDeepLinkName:(id)a0;
- (void)setupDeepLinkConfig;
- (void)onMainWindowFrameChanged;
- (void)onDidStartSearch;
- (void)onFindContactSearchViewDidPresentSearch:(id)a0;
- (void)onFindContactSearchViewSearchBar:(id)a0 textDidChange:(id)a1;
- (void)changePersonalQRCodePageMode;
- (void)registerYReportSdk;
- (void)onDownloadQRCodeFinish:(id)a0 FooterWording:(id)a1 qrcodeStatus:(unsigned int)a2;
- (void)reportClickFriendsAddButtonInRightTopMenuBtn;
- (void).cxx_destruct;

@end
