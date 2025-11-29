@class MMWebViewController, NSString, WebTransCgiLogic;
@protocol WebTransPageLogicDelegate;

@interface WebTransWebpageLogic : NSObject <WebTransCgiLogicDelegate>

@property (readonly, weak, nonatomic) MMWebViewController *webViewController;
@property (retain, nonatomic) NSString *brand;
@property (nonatomic) BOOL doingAnimationNow;
@property (nonatomic) BOOL isTransOrderFromMenuBtn;
@property (nonatomic) BOOL hasShownBtnOnceInThisPage;
@property (nonatomic) int residueReTryNum;
@property (weak, nonatomic) id<WebTransPageLogicDelegate> delegate;
@property (retain, nonatomic) WebTransCgiLogic *cgiMgr;
@property (copy, nonatomic) NSString *curRandomUUID;
@property (nonatomic) double dynamicRatio;
@property (nonatomic) long long thisPageCheckResult;
@property (nonatomic) long long transHelpButtonStatus;
@property (nonatomic) long long curPageStatus;
@property (nonatomic) BOOL hasInjected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initSetting;
- (id)webView;
- (void)stop;
- (void)checkByNLPIdentifier:(id /* block */)a0;
- (void)handleTransData:(id)a0;
- (void)onClickTransBtn;
- (void)onClickRevertBtn:(id /* block */)a0;
- (void)onGotoAnotherPage:(BOOL)a0;
- (void)onGetTriggerInModeNone;
- (void)onGetTriggerInModeTrans;
- (void)Prehandle_and_CallTransjsapi;
- (void)callJSRevertApi;
- (void)callJSTransApi;
- (void)injectTransJsWithCuruuid:(id)a0 andBlock:(id /* block */)a1;
- (void)checkHasInjectedBefore:(id /* block */)a0;
- (void)bounceAfterCgiReturn:(id)a0;
- (id)UnzipAndSotreCache:(id)a0;
- (void)replaceHTML:(id)a0;
- (void)tryCancelLoading;
- (void)cancelLoading;
- (void)titleViewCalculator;
- (void)enterUpStatus;
- (void)enterDownStatus;
- (void)animationChangeTitleView:(id)a0 toView:(id)a1 duration:(double)a2;
- (void)onTranslateNaviTtileAnimationStart;
- (void)onTranslateNaviTtileAnimationEnd;
- (void).cxx_destruct;

@end
