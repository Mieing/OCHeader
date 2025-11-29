@class WCPayWebImageView, MMUIActivityIndicatorView, UIImageView, NFCCardTipsUIViewData, UIView, UILabel, UIButton;
@protocol WCPayNFCCardTipsViewControllerDelegate;

@interface WCPayNFCCardTipsViewController : WCPayBaseViewController

@property (weak, nonatomic) id<WCPayNFCCardTipsViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NFCCardTipsUIViewData *m_viewData;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCPayWebImageView *cardLogoImageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (nonatomic) int currentCountDownSec;
@property (retain, nonatomic) UIView *middleTipsView;
@property (retain, nonatomic) UIView *upperLineView;
@property (retain, nonatomic) UILabel *middleLeftTextLabel;
@property (retain, nonatomic) UILabel *middleRightTextLabel;
@property (retain, nonatomic) UIView *lowerLineView;
@property (retain, nonatomic) UIButton *doneButton;
@property (nonatomic) BOOL needCheckTime;
@property (copy, nonatomic) id /* block */ onDoneBlk;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;

- (void)setOnDoneCallBack:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)onBack;
- (void)setDelegate:(id)a0;
- (void)setViewData:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (void)initNavigationBar;
- (void)updateViewData;
- (void)updateLoadingView;
- (id)navigationBarBackgroundColor;
- (void)updateCardLogo;
- (void)viewDidAppear:(BOOL)a0;
- (void)ticking;
- (id)countDownLabelString;
- (void)updateCountDownLabel;
- (id)getStatusImage:(id)a0;
- (void)updateTitle;
- (void)updateDesc;
- (void)updateDoneButton;
- (void)onClickDoneBtn:(id)a0;
- (void).cxx_destruct;

@end
