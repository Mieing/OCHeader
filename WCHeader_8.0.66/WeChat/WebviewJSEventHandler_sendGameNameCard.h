@class CMessageWrap, NSString, ForwardMessageLogicController, JSEvent, NSDictionary, WWKMsgForwarder, NSMutableData, NSURLConnection;

@interface WebviewJSEventHandler_sendGameNameCard : WebviewJSEventHandlerBase <NSURLConnectionDelegate, ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (retain, nonatomic) NSURLConnection *m_connecttion;
@property (retain, nonatomic) JSEvent *m_curEvent;
@property (retain, nonatomic) NSDictionary *m_curExtraData;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) WWKMsgForwarder *weworkMsgForwarder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)sendAppMessage:(id)a0 extraData:(id)a1 imageData:(id)a2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)dealloc;
- (void)stopForcedRotationToPortrait;
- (void).cxx_destruct;

@end
