@class NSString, CContact, JSApiSelectContactsViewController, SharePreConfirmSheetView, JSApiSelectSessionViewController;

@interface WAJSEventHandler_sendRedCoverAppMsg : WAJSEventHandler_BaseEvent <JSApiSelectSessionViewControllerDelegate, JSApiSelectContactsViewControllerDelegate, WCRedEnvelopesSendRedCoverAppMsgCgiDelegate, SharePreConfirmSheetViewDelegate>

@property (retain, nonatomic) NSString *receiveUri;
@property (retain, nonatomic) JSApiSelectSessionViewController *selectSessionViewController;
@property (retain, nonatomic) JSApiSelectContactsViewController *selectContactViewController;
@property (retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView;
@property (retain, nonatomic) CContact *selectedContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)showSharePreConfirmView:(id)a0;
- (void)startSendAppMsgRequest:(id)a0;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiResponseOK:(id)a0;
- (void)onWCRedEnvelopesSendRedCoverAppMsgCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnSharePreConfirmSheetViewSend:(id)a0;
- (void)OnSharePreConfirmSheetViewCancel:(id)a0;
- (void).cxx_destruct;

@end
