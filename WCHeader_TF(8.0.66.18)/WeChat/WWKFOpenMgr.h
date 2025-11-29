@class WWKFContactOpLogic, NSString;

@interface WWKFOpenMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WWKFContactOpLogic *contactOpLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowErrWithhErrCode:(long long)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cancelCurrentWWKFRequest;
- (void)handleWWKFContactFlowWithUrl:(id)a0 viewController:(id)a1 scene:(int)a2 completeBlock:(id /* block */)a3;
- (void)handleWWKFContactFlowWithUrl:(id)a0 viewController:(id)a1 scene:(int)a2 openExtInfo:(id)a3 completeBlock:(id /* block */)a4;
- (void)handleWWKFContactFlowWithContact:(id)a0 viewController:(id)a1 scene:(int)a2 completeBlock:(id /* block */)a3;
- (void)handleFetchContactResp:(id)a0 context:(id)a1 spamContext:(id)a2 finderContext:(id)a3;
- (void)showUserConfirmAddContactWithContact:(id)a0 context:(id)a1;
- (void)requestAddContactWithContact:(id)a0 context:(id)a1 spamContext:(id)a2 finderContext:(id)a3;
- (void)jumpToWWKFMsgLogicViewControllerWithContact:(id)a0 context:(id)a1;
- (void)doJumpWWKFMsgLogicViewController:(id)a0 navigationController:(id)a1 inScene:(int)a2 showPageSheet:(BOOL)a3;
- (void)processFlowContextWhenFlowUIWorks:(id)a0;
- (id)dismissFlowViewControllerWhenFlowWorks:(id)a0;
- (id)parseCarryWordFromKFUrl:(id)a0;
- (void)doShowAlertWithSvrControlErrMsg:(id)a0 context:(id)a1;
- (void)doCallbackResultWithErrCode:(long long)a0 context:(id)a1;
- (void).cxx_destruct;

@end
