@class NSMutableArray, NSString, UIImageView, LoginUserCellViewModel, UIView, CTRichTextView, MMUILabel;
@protocol WCAccountLoginUsersViewControllerDelegate;

@interface WCAccountLoginUsersViewController : WCAccountBaseViewController <WCAccountCloseMainFrameExt> {
    id<WCAccountLoginUsersViewControllerDelegate> m_delegate;
    UIView *m_headerView;
    UIImageView *m_logoImageView;
    CTRichTextView *m_headerTip;
    CTRichTextView *m_headerEditTip;
    UIView *m_lineView;
    MMUILabel *m_editTip;
    NSMutableArray *m_cellViewModels;
    LoginUserCellViewModel *m_curLoginLoadingViewModel;
    BOOL m_isEditing;
}

@property (nonatomic) BOOL hideDefaultLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportOpCode:(unsigned int)a0;
- (BOOL)useGrayBackgroundColor;
- (BOOL)useTableView;
- (id)navigationBarBackgroundColor;
- (BOOL)hasUserLogined;
- (id)getNewHeaderView:(id)a0;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)reloadLoginUserCells;
- (void)makeAccountCell:(id)a0 cellInfo:(id)a1;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)setDelegate:(id)a0;
- (void)onLoginErrorWithIsNetworkError:(BOOL)a0;
- (void)onUpdateLoginUsers;
- (void)tryLoginUserWithUserName:(id)a0;
- (void)onSwitchMainViewToLoginView;
- (void)onClickLoginUserCell:(id)a0;
- (void)onClickAddLoginInfo;
- (void)onClickDeleteLoginUser:(id)a0;
- (void)onRealDeleteLoginUser:(id)a0;
- (void)onEditLoginUserInfo;
- (void)onCancelEditLoginUserInfo;
- (void).cxx_destruct;

@end
