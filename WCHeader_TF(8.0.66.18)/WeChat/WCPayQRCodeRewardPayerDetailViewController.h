@class WCPayNoticeItemView, MMTableView;
@protocol WCPayQRCodeRewardPayerDetailViewControllerDelegate;

@interface WCPayQRCodeRewardPayerDetailViewController : WCPayBaseViewController

@property (weak, nonatomic) id<WCPayQRCodeRewardPayerDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;

- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)setupTableHeaderView;
- (void)setupTableFooterView;
- (void)leftBarButtonClick;
- (void)amountBtnClick:(id)a0;
- (void)editMoneyBtnClick;
- (void).cxx_destruct;

@end
