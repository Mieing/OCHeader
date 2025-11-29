@class NSString, CContact, SessionSelectController, JSEvent, SharePreConfirmSheetView;

@interface WebviewJSEventHandler_sendRedCoverAppMsg : WebviewJSEventHandlerBase <WCRedEnvelopesSendRedCoverAppMsgCgiDelegate, SharePreConfirmSheetViewDelegate, SessionSelectControllerDelegate>

@property (retain, nonatomic) NSString *receiveUri;
@property (retain, nonatomic) SessionSelectController *sessionSelectVC;
@property (retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView;
@property (retain, nonatomic) CContact *selectedContact;
@property (retain, nonatomic) JSEvent *m_event;
@property (retain, nonatomic) NSString *m_sessionid;
@property (retain, nonatomic) NSString *m_coverid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)kvReport:(unsigned int)a0 toUsername:(id)a1;
- (BOOL)onShouldFilterContact:(id)a0;
- (BOOL)filterContact:(id)a0;
- (id)getViewController;
- (void)OnSelectSessionCancel:(id)a0;
- (void)showSharePreConfirmView:(id)a0;
- (void)startSendAppMsgRequest:(id)a0;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)a0;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnSharePreConfirmSheetViewSend:(id)a0;
- (void)OnSharePreConfirmSheetViewCancel:(id)a0;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void).cxx_destruct;

@end
