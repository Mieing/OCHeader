@class ShareMessageConfirmLogicHelper, NSString, NSDictionary, CMessageWrap, JSEvent, NSURLConnection, NSMutableData;

@interface WebviewJSEventHandler_sendAppMessageToSpecifiedContact : WebviewJSEventHandlerBase <ShareMessageConfirmLogicHelperDelegate, NSURLConnectionDelegate, PBMessageObserverDelegate> {
    ShareMessageConfirmLogicHelper *m_jsSendAppMsgHelper;
    NSDictionary *m_dicExtraData;
    NSString *m_nsUserName;
}

@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (copy, nonatomic) NSString *m_nsThumbUrl;
@property (retain, nonatomic) NSURLConnection *m_connecttion;
@property (retain, nonatomic) JSEvent *m_curEvent;
@property (retain, nonatomic) NSDictionary *m_curExtraData;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)startSendMessage;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)getTransIdRequest:(id)a0 WithAppID:(id)a1;
- (void)sendAppMessage:(id)a0 extraData:(id)a1 imageData:(id)a2;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)OnSendMessageOK:(id)a0;
- (void)OnSendMessageFail:(id)a0 WithError:(unsigned long long)a1;
- (void)OnSendMessageCancel:(id)a0;
- (void)dealloc;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
