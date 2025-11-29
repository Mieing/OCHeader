@class NSString, NSDictionary, WCBizSchemeBlockViewController, UIViewController;

@interface WCBizCommonSchemeUrlMgr : MMUserService <WCBizSchemeBlockViewControllerDelegate, WCBizSchemeUrlBaseHandlerDelegate, MMServiceProtocol>

@property (retain, nonatomic) WCBizSchemeBlockViewController *blockViewController;
@property (retain, nonatomic) NSDictionary *handlerDictionary;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)handleWCBizSchemeUrl:(id)a0;
- (void)startCheckExteranlUrl:(id)a0;
- (BOOL)canHanldeActionCode:(unsigned int)a0;
- (id)genneralAntiSpamInfoWithErrMsg:(id)a0;
- (void)onBizSchemeUrlBlockAction:(unsigned long long)a0;
- (void)stopHandleUrlAndDismissBlockVC;
- (void)continueHandleUrlWithContext:(id)a0;
- (void)onBizHandlerLoadingEnd:(id)a0;
- (BOOL)checkAntiSpamInfoValid:(id)a0;
- (id)getFromViewController;
- (void).cxx_destruct;

@end
