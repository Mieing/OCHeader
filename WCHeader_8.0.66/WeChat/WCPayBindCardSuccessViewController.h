@class UIView, NSString, WCPayQueryBindCardAwardCgi, WCPayBindCardSuccessResponse, UIImageView, UIButton, WCPaySendBindCardAwardCgi, WCPayWebImageView, UILabel;
@protocol WCPayBindCardSuccessViewControllerDelegate;

@interface WCPayBindCardSuccessViewController : WCPayBaseViewController <WCPaySendBindCardAwardCgiDelegate, WCPayQueryBindCardAwardCgiDelegate>

@property (retain, nonatomic) UIView *m_headerView;
@property (retain, nonatomic) UIImageView *m_iconView;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_descLabel;
@property (retain, nonatomic) UIView *m_topLineView;
@property (retain, nonatomic) WCPayWebImageView *m_bankIconView;
@property (retain, nonatomic) UIImageView *m_tinyAppIconView;
@property (retain, nonatomic) UILabel *m_bankTitleLabel;
@property (retain, nonatomic) UILabel *m_bankDescLabel;
@property (retain, nonatomic) UIButton *m_bankButton;
@property (retain, nonatomic) UIView *m_bottomLineView;
@property (retain, nonatomic) UIButton *m_doneButton;
@property (weak, nonatomic) id<WCPayBindCardSuccessViewControllerDelegate> m_delegate;
@property (retain, nonatomic) WCPayBindCardSuccessResponse *m_response;
@property (retain, nonatomic) WCPaySendBindCardAwardCgi *m_sendAwardCgi;
@property (retain, nonatomic) WCPayQueryBindCardAwardCgi *m_queryAwardCgi;
@property (nonatomic) BOOL m_disableAwardButton;
@property (nonatomic) BOOL m_needQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportShowViewWithActivityId:(id)a0 bindSerial:(id)a1 bankType:(id)a2;
+ (void)reportClickDiscountWithActivityId:(id)a0 bindSerial:(id)a1 bankType:(id)a2;
+ (void)report14877WithActivityId:(id)a0 bindSerial:(id)a1 reportType:(int)a2 bankType:(id)a3;

- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)startSendBindCardAwardCgi;
- (void)viewDidLoad;
- (void)reloadView;
- (void)updateIconView;
- (void)updateTitleLabel;
- (id)titleLabelText;
- (void)updateDescLabel;
- (void)updateTopLineView;
- (void)updateBankIconView;
- (void)updateTinyAppIconView;
- (void)updateBankTitleLabel;
- (void)updateBankDescLabel;
- (void)updateBankButton;
- (void)updateBottomLineLabel;
- (void)updateDoneButton;
- (void)onClickDone;
- (void)onClickBankButton;
- (void)didReceiveMemoryWarning;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setDelegate:(id)a0;
- (id)awardButtonTitle;
- (id)awardIconUrl;
- (id)awardTitle;
- (id)awardDesc;
- (BOOL)awardButtonEnable;
- (BOOL)showActivity;
- (void)onWCPaySendBindCardAwardCgi:(id)a0 didGetResponse:(id)a1;
- (void)onWCPaySendBindCardAwardCgi:(id)a0 didFailWithError:(id)a1;
- (void)onWCPayQueryBindCardAwardCgi:(id)a0 didGetResponse:(id)a1;
- (void)onWCPayQueryBindCardAwardCgi:(id)a0 didFailWithError:(id)a1;
- (BOOL)isiPadLandscape;
- (void).cxx_destruct;

@end
