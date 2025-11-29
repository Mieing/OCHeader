@class MultiRoomContactSelectViewController, NSString, NSMutableArray;

@interface WebviewJSEventHandler_chooseChatRoomMember : WebviewJSEventHandlerBase <MultiRoomContactSelectViewControllerDelegate> {
    NSMutableArray *m_customMemberList;
}

@property (retain, nonatomic) MultiRoomContactSelectViewController *m_viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)addContactToList:(id)a0 toArray:(id)a1 dicEncryptSecret:(id)a2 isCanSelectSelf:(BOOL)a3;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onMultiSelectContactCancel;
- (BOOL)useCustomMemberList;
- (void).cxx_destruct;

@end
