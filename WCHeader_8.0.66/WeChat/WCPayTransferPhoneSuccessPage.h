@class KindaUIView, UIView, UIImageView, UIButton, WCPayCss, NSMutableArray, UILabel, TransferPhoneSuccPageResp;
@protocol WCPayTransferPhoneSuccessPageDelegate;

@interface WCPayTransferPhoneSuccessPage : WCPayBaseViewController

@property (weak) id<WCPayTransferPhoneSuccessPageDelegate> m_delegate;
@property (retain) KindaUIView *noticeView;
@property (retain) UILabel *noticeLabel;
@property (retain) UIView *containerView;
@property (retain) UIView *headerView;
@property (retain) UIImageView *iconView;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *subTitleView;
@property (retain) UIView *firstLineView;
@property (retain) UIView *bottomContainerView;
@property (retain) UIButton *backButton;
@property (retain) WCPayCss *css;
@property (retain) TransferPhoneSuccPageResp *succResp;
@property (retain) NSMutableArray *keyValueArray;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void)updateView;
- (void)updateNoticeView;
- (void)onTapNotice;
- (void)updateNoticeLabel;
- (void)updateHeaderView;
- (void)updateIconView;
- (void)updateTitleView;
- (void)updateSubTitleView;
- (void)updateFirstLineView;
- (void)updateKeyValue;
- (void)updateBottomContainerView;
- (void)updateBackButton;
- (void)onTapBack;
- (void).cxx_destruct;

@end
