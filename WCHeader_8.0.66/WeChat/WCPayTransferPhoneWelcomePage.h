@class WCPayCss, WCPayTransferPhoneProtocalHalfPage, UIImageView, ComplianceItem, UILabel, UIView, UIButton;
@protocol WCPayTransferPhoneProtocalHalfPageDelegate, WCPayTransferPhoneWelcomePageDelegate;

@interface WCPayTransferPhoneWelcomePage : WCPayBaseViewController

@property (retain) UIView *containerView;
@property (retain) UIImageView *iconImageView;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *subTitleView;
@property (retain) UILabel *subTitleView2;
@property (retain) UIView *bottomContainerView;
@property (retain) UIButton *confirmButton;
@property (retain) UIView *headerView;
@property (retain) WCPayCss *css;
@property (retain, nonatomic) UIView *subTitleContainerView;
@property (retain, nonatomic) UIView *subTitleContainerView2;
@property (retain, nonatomic) UIImageView *dotImageView;
@property (retain, nonatomic) UIImageView *dotImageView2;
@property (retain, nonatomic) WCPayTransferPhoneProtocalHalfPage *halfPage;
@property (weak) id<WCPayTransferPhoneWelcomePageDelegate, WCPayTransferPhoneProtocalHalfPageDelegate> m_delegate;
@property (retain, nonatomic) ComplianceItem *complianceItem;

- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)updateView;
- (void)updateHeaderView;
- (void)updateIcon;
- (void)updateTitleView;
- (void)updateSubTitleContainverView;
- (void)updateSubTitleContainverView2;
- (void)updateBottomContainerView;
- (void)updateStartButton;
- (void)updateHalfPage;
- (void)onTapStart;
- (void)closeHalfPage;
- (void).cxx_destruct;

@end
