@class CContact, NSString, JSApiSelectContactsViewController, JSEvent, JSApiSelectSessionViewController;

@interface WebviewJSEventHandler_sendSingleAppMessage : WebviewJSEventHandlerBase <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate, PBMessageObserverDelegate> {
    JSApiSelectSessionViewController *m_oSelectSessionViewController;
    JSApiSelectContactsViewController *m_oSelectContactViewController;
    JSEvent *m_oJSEvent;
    CContact *m_oSelectedContact;
    NSString *m_nsAppid;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)cancelEndJSEnvent;
- (void)confirmEndJSEvent;
- (void)dealloc;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleBizResponseCGIWrap:(id)a0;
- (void)getBizUserOpenIdRequest;
- (void)sendAppMessage;
- (void).cxx_destruct;

@end
