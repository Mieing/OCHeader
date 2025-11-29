@class UIView, NSString, WCPaySelectVerifyTypeViewV2, InternalTask, GetRealnameWordingRsp, WCPayJumpRemindControlLogic, UIImageView, WCPayJumpRemindInfo, UIButton, UILabel;
@protocol WCPaySelectVerifyTypeViewControllerDelegate;

@interface WCPaySelectVerifyTypeViewController : WCPayBaseViewController <WCPaySelectVerifyTypeViewV2Delegate> {
    id<WCPaySelectVerifyTypeViewControllerDelegate> m_delegate;
    NSString *bindCardTitle;
    NSString *bindCardSubTitle;
    NSString *bindIdTitle;
    NSString *bindIdSubTitle;
    NSString *extralWording;
    BOOL questionAnswerSwitch;
    NSString *questionAnswerUrl;
    BOOL isShowBindCard;
    BOOL isShowRealnameVerify;
    BOOL isShowBindCardVerify;
    NSString *bindCardVerifyTitle;
    NSString *bindCardVerifySubTitle;
    BOOL isNeedShowBindCardVerifyAlertView;
    NSString *bindCardVeifyAlertViewRightButtonText;
    NSString *bindCardVeifyAlertViewContent;
}

@property (retain, nonatomic) GetRealnameWordingRsp *wording;
@property (retain, nonatomic) InternalTask *m_internalTask;
@property (retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo;
@property (retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindControlLogic;
@property (retain, nonatomic) UIImageView *m_iconForSafeTips;
@property (retain, nonatomic) UIButton *m_buttonForSafeTips;
@property (retain, nonatomic) UIImageView *m_arrowForSafeTips;
@property (retain, nonatomic) UIView *m_safeTipsBase;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain) WCPaySelectVerifyTypeViewV2 *layoutV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePresented:(BOOL)a0;
- (void)reloadTableView;
- (void)OnBack;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)headerView;
- (id)createDotLabel;
- (void)realSelectBindCard;
- (void)selectRealnameVerify;
- (void)onContinueSelectRealnameVerify;
- (void)realSelectRealnameVerify:(id)a0;
- (void)realSelectBindCardVerify;
- (void)getWording;
- (void)populateData:(id)a0;
- (void)onRightBarButtonClick;
- (void)onWCPayPrivacyViewControllerClickAgree:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateIconForSafeTips;
- (void)updateArrowForSafeTips;
- (void)adjustBottomTips;
- (void)clickSafeTips;
- (id)navigationBarBackgroundColor;
- (void)onWCPaySelectVerifyTypeViewV2ClickSafeTips;
- (void)onWCPaySelectVerifyTypeViewV2ClickRealName;
- (id)onWCPaySelectVerifyTypeViewV2TableViewInfo;
- (void).cxx_destruct;

@end
