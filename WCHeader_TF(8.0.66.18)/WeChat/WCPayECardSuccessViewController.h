@class NSString, UIImageView, UILabel, UIButton;
@protocol WCPayECardSuccessViewControllerDelegate;

@interface WCPayECardSuccessViewController : WCPayBaseViewController

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *detail;
@property (retain, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) id<WCPayECardSuccessViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *vcTitle;
@property (copy, nonatomic) NSString *successTip;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)leftBarButtonItemClick;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (id)headerView;
- (void)done;
- (void).cxx_destruct;

@end
