@class CMessageWrap, NSString, WCFinderLimitAgreementCommonHeadView, UIButton, MMLimitedModeVerifyPasswordUtilLogic, MMUILabel, WCFinderLimitCheckPanelView, ForwardMessageLogicController;

@interface WCFinderCheckAntiAddictViewController : MMUIViewController <UITextFieldDelegate, MMLimitedModeVerifyPasswordUtilLogicDelegate, ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (retain, nonatomic) WCFinderLimitAgreementCommonHeadView *commonHeadView;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) MMUILabel *checkTipsLabel;
@property (retain, nonatomic) WCFinderLimitCheckPanelView *checkPanelView;
@property (copy, nonatomic) id /* block */ didAppearBlock;
@property (copy, nonatomic) id /* block */ verifySucBlock;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (nonatomic) long long antiAddictStyle;
@property (nonatomic) long long antiAddictScene;
@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) MMLimitedModeVerifyPasswordUtilLogic *verifyPwdLogic;
@property (retain, nonatomic) CMessageWrap *authorizeRequestMessageWrap;
@property (nonatomic) BOOL controlExitState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 scene:(long long)a1;
- (id /* block */)didAppear;
- (id /* block */)verifySuc;
- (id /* block */)exit;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (int)feedViewControllerScene;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldAutorotate;
- (void)setUpUI;
- (void)setUpCommonHeadViewContent;
- (void)layoutSubViewsConstraint;
- (void)viewWillLayoutSubviews;
- (void)setUpCheckPanelView;
- (id)createCellWithTitle:(id)a0 cellWidth:(double)a1 cellHeight:(double)a2;
- (void)onClickCheckPwdBtn;
- (void)onClickCheckGuardianBtn;
- (void)onClickExitFinderAction;
- (void)doExitAction;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
