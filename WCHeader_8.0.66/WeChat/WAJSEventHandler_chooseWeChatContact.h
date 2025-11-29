@class JSApiSelectContactsViewController, CContact, JSApiSelectSessionViewController;

@interface WAJSEventHandler_chooseWeChatContact : WAJSEventHandler_BaseEvent <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate> {
    CContact *m_oSelectedContact;
}

@property (nonatomic) BOOL isSingleConatct;
@property (nonatomic) BOOL isChatRoom;
@property (retain, nonatomic) JSApiSelectSessionViewController *oSelectSessionViewController;
@property (retain, nonatomic) JSApiSelectContactsViewController *oSelectContactViewController;

- (void)handleJSEvent:(id)a0;
- (void)cancelEndJSEnvent;
- (void)confirmEndJSEvent;
- (id)getRoomName:(id)a0;
- (BOOL)isShowMobileName:(id)a0 mobileName:(id)a1;
- (void)dealloc;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void).cxx_destruct;

@end
