@class AWEIMMessageConversation, UIView;
@protocol IESIMLoadingViewProtocol, IESIMVacantViewProtocol;

@interface IESIMGroupTransferGroupOwnerListViewController : AWEIMListBaseViewController

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL isTranferingGroupOwner;
@property (nonatomic) unsigned long long listState;
@property (retain, nonatomic) UIView<IESIMVacantViewProtocol> *vacantView;
@property (nonatomic) long long contentBottomInset;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;

- (void)p_dismiss;
- (long long)currentFunctin;
- (double)additionalContentBottomInset;
- (void)p_setupNavigationBar;
- (id)curConversationID;
- (void)didTapCellAtIndexPath:(id)a0;
- (void)p_showEmptyPageWithPageState:(unsigned long long)a0;
- (void)p_createVacantViewIfNeeded;
- (void)p_onIESIMThemeChangeNotification;
- (void)p_createTipsViewIfNeededWithTips:(id)a0;
- (void)p_trackConfirmTransferGroupOwner:(id)a0 toUserID:(id)a1 isSuccess:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;
- (void)viewDidLoad;
- (void)dealloc;

@end
