@class HoneyPayListResp, NSString, NSDictionary, WCPayNoticeItemView, WCPayAgreementView, UIButton;
@protocol HoneyPayHomeViewControllerDelegate;

@interface HoneyPayHomeViewController : HoneyPayBaseViewController <WCPayNoticeBannerDelegate>

@property (retain, nonatomic) HoneyPayListResp *response;
@property (retain, nonatomic) WCPayAgreementView *agreementView;
@property (retain, nonatomic) UIButton *addCardButton;
@property (retain, nonatomic) UIButton *helpButton;
@property (retain, nonatomic) NSDictionary *bannerData;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (weak, nonatomic) id<HoneyPayHomeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)useBlackStatusbar;
- (void)refreshViewWithData:(id)a0;
- (void)requestBannerData;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (void)showWelcome;
- (void)showCardList;
- (void)makeCardCell:(id)a0 cellInfo:(id)a1;
- (void)makeAddCardCell:(id)a0;
- (void)makeReachLimitCell:(id)a0;
- (void)onRightBarButtonClick;
- (void)clickWelcomeHelp;
- (void)clickCardCell:(id)a0;
- (void)clickAddCard;
- (void)banner:(id)a0 clickWithUrl:(id)a1;
- (id)banner;
- (BOOL)useTransparentNavibar;
- (id)agreementWording;
- (void).cxx_destruct;

@end
