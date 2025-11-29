@class CContact, NSString, SessionSelectController, SharePreConfirmSheetView;

@interface WAJSEventHandler_quickSendRedPacket : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate, SharePreConfirmSheetViewDelegate, WCRedEnvelopesSendControlLogicDelegate, MMUIViewControllerDelegate>

@property (retain, nonatomic) SessionSelectController *sessionSelectVC;
@property (retain, nonatomic) SharePreConfirmSheetView *m_confirmView;
@property (retain, nonatomic) CContact *m_selectContact;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *materialId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (void)OnSharePreConfirmSheetViewSend:(id)a0;
- (void)OnSharePreConfirmSheetViewCancel:(id)a0;
- (id)getViewController;
- (void)OnWCRedEnvelopesSendControlLogicPaySuccess:(id)a0;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)setupSessionSelectViewController;
- (void)internalShowConfirmView:(id)a0;
- (void).cxx_destruct;

@end
