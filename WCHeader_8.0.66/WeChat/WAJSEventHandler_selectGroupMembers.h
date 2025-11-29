@interface WAJSEventHandler_selectGroupMembers : WAJSEventHandler_BaseEvent <WASelectGroupMemberControllerDelegate>

- (void)handleJSEvent:(id)a0;
- (void)onWASelectGroupMemberViewControllerCancel;
- (void)onWASelectGroupMemberViewControllerFinish:(id)a0 chatroomContact:(id)a1;
- (id)init;

@end
