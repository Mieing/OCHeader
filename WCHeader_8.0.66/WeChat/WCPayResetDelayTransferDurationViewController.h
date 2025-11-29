@class NSString, DelaySwitchSettingLogic, WCPayResetDelayTipsNewModal, GetTransferWordingResponse, UIButton;
@protocol WCPayResetDelayTransferDurationViewControllerDelegate;

@interface WCPayResetDelayTransferDurationViewController : WCPayBaseViewController <WCPayResetDelayTipsNewModalDelegate>

@property (copy, nonatomic) NSString *selectedTitle;
@property (retain, nonatomic) DelaySwitchSettingLogic *delaySetting;
@property (retain, nonatomic) UIButton *footerBtn;
@property (copy, nonatomic) NSString *originSelectedTitle;
@property (retain, nonatomic) WCPayResetDelayTipsNewModal *resetDelayTipsModal;
@property (weak, nonatomic) id<WCPayResetDelayTransferDurationViewControllerDelegate> delegate;
@property (retain, nonatomic) GetTransferWordingResponse *wordingResponse;
@property (nonatomic) unsigned long long entryScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupModel;
- (id)defaultSelectedTitle;
- (unsigned long long)switchType;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (id)setupTableHeaderView;
- (void)setupTableFooterView;
- (void)makeCell:(id)a0 cellInfo:(id)a1;
- (void)selcetCell:(id)a0;
- (void)footerBtnClick;
- (void)onWCPayResetDelayTipsNewModalTapConfirm;
- (void)onWCPayResetDelayTipsNewModalTapCancel;
- (void)onOpenQA;
- (void)reportAction:(id)a0 withSelectedSwitchState:(id)a1;
- (void).cxx_destruct;

@end
