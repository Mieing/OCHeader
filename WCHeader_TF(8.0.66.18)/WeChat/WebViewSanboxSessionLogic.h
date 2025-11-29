@class NSMutableDictionary, WebvViewSanboxSessionInfo, WKWebView, NSString;
@protocol WebViewSanboxSessionLogicDelegate, YYWebViewInterface;

@interface WebViewSanboxSessionLogic : MMObject <WebViewSanboxSessionTaskDelegate>

@property (retain, nonatomic) NSMutableDictionary *dictSessionInfo;
@property (retain, nonatomic) WebvViewSanboxSessionInfo *currentPageSessionInfo;
@property (weak, nonatomic) id<WebViewSanboxSessionLogicDelegate> delegate;
@property (weak, nonatomic) WKWebView<YYWebViewInterface> *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canUseWebCom;
+ (BOOL)canUseWebComMessageReplyHandler;
+ (id)WebComMessageReplyHandlerName;
+ (BOOL)canUseWebComDebugEnv;

- (id)init;
- (void)changeWebContentSessionForUrl:(id)a0;
- (void)releaseWebViewSessionForClearWebContent;
- (id)mainFrameSessionId;
- (id)currentSessionIFrameUrlPrefix;
- (id)debugWxConfigUrlForUrl:(id)a0;
- (void)onRecieveWebComTagInfo:(id)a0 forAppId:(id)a1 forUrl:(id)a2 forContext:(id)a3;
- (void)handleWebComMessage:(id)a0 mainFrame:(BOOL)a1 frameUrl:(id)a2;
- (void)iframe_handlePostMessage:(id)a0;
- (void)dispatchEvent:(id)a0 params:(id)a1 toWebCompt:(id)a2;
- (id)replyResultFromPostMessage:(id)a0 errMsg:(id *)a1;
- (id)promptResultFromFrameInfo:(id)a0 promptMessage:(id)a1;
- (void)funcCallCreateCtxTask:(id)a0;
- (void)patchTaskTagList:(id)a0;
- (void)doCallBackMainFrameForWebComptTaskClear;
- (void)sendMessageToWebCompt:(id)a0 messageString:(id)a1;
- (void)mainThread_onSendMessageToSanbox:(id)a0 task:(id)a1;
- (id)mainThread_jsapiDef:(id)a0;
- (void)mainThread_onInvokeJsApiFromContext:(id)a0 params:(id)a1 callBackId:(id)a2 task:(id)a3;
- (void)mainThread_fetchCurrentSesessionEvalMainFrameBeginTimeStamp:(unsigned long long *)a0 endTimeStamp:(unsigned long long *)a1;
- (void)callbackTaskJsApiInvoke:(id)a0 resultMsg:(id)a1 callBackId:(id)a2 task:(id)a3;
- (void)task_callbackTaskJsApiInvoke:(id)a0 result:(id)a1 callBackId:(id)a2 task:(id)a3;
- (void)doReportWxConfigResult:(id)a0 forContext:(id)a1;
- (void).cxx_destruct;

@end
