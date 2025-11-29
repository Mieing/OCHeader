@class NSString, WebTransWebpageLogic, UIView, NSCache;

@interface MMWebViewPlugin_handleTranslate : MMWebViewPluginBase <MMWebHalfScreenDelegate, WebTransHelpButtonDelegate, WebTransPageLogicDelegate, MMMsgContentNavBarDelegate>

@property (retain, nonatomic) NSCache *haveTransedTextCache;
@property (retain, nonatomic) UIView *orgTitleView;
@property (nonatomic) BOOL hasHiddenRightButton;
@property (nonatomic) double dynamicRatio;
@property (copy, nonatomic) NSString *curRandomUUID;
@property (retain, nonatomic) WebTransWebpageLogic *webPageMgr;
@property (nonatomic) BOOL shouldTranslateNaviTitleShow;
@property (nonatomic) BOOL canUseWebTransAbility;
@property (nonatomic) long long transHelpButtonStatus;
@property (nonatomic) BOOL isInTransABtestList;
@property (nonatomic) long long status;
@property (nonatomic) BOOL userHasClickedCloseHangTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getDynamicRatio;

- (id)init;
- (void)judgeWebTransAvailable;
- (void)cleanWebPageMgr;
- (void)initWebPageMgr;
- (void)transReportWithAction:(long long)a0 andScene:(long long)a1 andUrl:(id)a2;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)dispatchPostMessage:(id)a0;
- (void)handleMessageDomReady;
- (void)handleMessageWebTrans:(id)a0;
- (void)dispatchStatusTask;
- (BOOL)checkPullNoticeScreenBefore;
- (void)pullHalfScreenNotice;
- (BOOL)isDoingTransNow;
- (void)hideHelpButton;
- (BOOL)isThisPageCanTrans;
- (BOOL)isThisPageFollowMPTitleRule;
- (void)doAfterClickTransBtnFromHelpBtn:(BOOL)a0;
- (void)doAfterClickRevertBtn;
- (void)onChangeTargetLanguage;
- (void)onNoticeHalfScreenConfirmBtnClick;
- (void)clickHelperTransButton;
- (void)clickHelperRevertButton;
- (id)getWebViewController;
- (id)getWKWebView;
- (id)getCache;
- (void)storeCache:(id)a0 withKey:(id)a1;
- (void)clearCache;
- (long long)getStatus;
- (void)setStatusFromPageLogic:(long long)a0;
- (BOOL)getHiddenRightButtonFlag;
- (id)getOrgTitleView;
- (long long)getHelpButtonAvailableStatus;
- (void)onTranslateNaviTitleStateChange:(BOOL)a0;
- (void)onTranslateNaviTitleAnimationStart;
- (void)onTranslateNaviTitleAnimationEnd;
- (void).cxx_destruct;

@end
