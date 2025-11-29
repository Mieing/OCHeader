@class ForwardMessageLogicController, NSMutableDictionary, NSString;

@interface ScanGoodsJSHandler : WSTemplateBaseJSHandler <IScanGoodsServiceExt, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic;
@property (retain, nonatomic) NSMutableDictionary *forwardUrl2MessageWrapMap;
@property (retain, nonatomic) NSMutableDictionary *forwardUrl2UploadTaskMap;
@property (nonatomic) unsigned int enterSessionID;
@property (nonatomic) unsigned int tabSessionID;
@property (nonatomic) unsigned int scanSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)jsEventsNeedRegister;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)a0 params:(id)a1 callbackID:(id)a2;
- (unsigned long long)getLocalJSBusinessType;
- (void)handleJSAPIUpdateShareData:(id)a0;
- (void)handleJSAPIShowShareMenu:(id)a0;
- (void)onSelectShareChat:(id)a0;
- (void)onMpTemplateResponseSuccess:(unsigned int)a0 content:(id)a1;
- (void)onMpTemplateResponseFail:(unsigned int)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void).cxx_destruct;

@end
