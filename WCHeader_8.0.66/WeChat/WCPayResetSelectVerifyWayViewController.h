@protocol WCPayResetSelectVerifyWayViewControllerDelegate;

@interface WCPayResetSelectVerifyWayViewController : WCPayBaseViewController

@property (weak, nonatomic) id<WCPayResetSelectVerifyWayViewControllerDelegate> delegate;

- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBar;
- (void)leftBarButtonItemClick;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupContentView;
- (id)setupTableHeaderView;
- (id)genVerifyWayViewWithTitle:(id)a0 desc:(id)a1 iconImage:(id)a2 action:(SEL)a3;
- (void)clickVerifyFace;
- (void)clickVerifyCard;
- (void).cxx_destruct;

@end
