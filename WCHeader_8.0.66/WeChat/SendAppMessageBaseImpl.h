@class CMessageWrap, NSString, WWKMsgForwarder, JSEvent, ForwardMessageLogicController, NSDictionary, NSMutableData, WebviewJSEventHandlerBase, NSURLConnection;

@interface SendAppMessageBaseImpl : MMObject <NSURLConnectionDelegate, ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (weak, nonatomic) WebviewJSEventHandlerBase *eventHandler;
@property (copy, nonatomic) NSString *variantEventName;
@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (retain, nonatomic) NSURLConnection *m_connecttion;
@property (retain, nonatomic) JSEvent *m_curEvent;
@property (retain, nonatomic) NSDictionary *m_curExtraData;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) WWKMsgForwarder *weworkMsgForwarder;
@property (copy, nonatomic) id /* block */ beforeForwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webviewController;
- (id)mmWebViewController;
- (id)wxBaseWebViewController;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showCanNotShareEmptyPage;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)sendAppMessage:(id)a0 extraData:(id)a1 imageData:(id)a2;
- (BOOL)enableExtraParseUrl;
- (void)getExtInfoFromExtraInfo:(id)a0 mpInfoModel:(id)a1 sourceUsername:(id *)a2 sourceDisplayName:(id *)a3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)jsAdd2MyFav:(id)a0 extraData:(id)a1;
- (void)dealloc;
- (void)stopForcedRotationToPortrait;
- (void)reportAdLandingPageShareIfNeededWithToUserName:(id)a0 shareType:(unsigned int)a1;
- (void).cxx_destruct;

@end
