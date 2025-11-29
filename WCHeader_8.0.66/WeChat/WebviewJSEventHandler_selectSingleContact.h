@class CContact, NSString, JSApiSelectContactsViewController, JSEvent, JSApiSelectSessionViewController;

@interface WebviewJSEventHandler_selectSingleContact : WebviewJSEventHandlerBase <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate, PBMessageObserverDelegate> {
    int m_enReturnValueSignedType;
    JSApiSelectSessionViewController *m_oSelectSessionViewController;
    JSApiSelectContactsViewController *m_oSelectContactViewController;
    JSEvent *m_oJSEvent;
    CContact *m_oSelectedContact;
    unsigned int m_uiSelectMode;
    NSString *m_nsBusiId;
    NSString *m_nsAppid;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2 CurrentViewController:(id)a3;
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
- (void)handlePayResponeCGIWrap:(id)a0;
- (void)handleBizResponseCGIWrap:(id)a0;
- (void)getIBGUserOpenIdRequest;
- (void)getBizUserOpenIdRequest;
- (void).cxx_destruct;

@end
