@class NSString, CContact, MMUIViewController, RoomHistoryContext;
@protocol RoomDelMemControllDelegate;

@interface RoomDelMemController : NSObject <WCActionSheetDelegate, ChatroomMemberRemoveViewControllerDelegate, IOplogExt> {
    CContact *_contact;
    MMUIViewController *_weakViewController;
}

@property (retain, nonatomic) RoomHistoryContext *historyContext;
@property (weak, nonatomic) id<RoomDelMemControllDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 roomContact:(id)a1 historyContext:(id)a2;
- (void)updateContact:(id)a0;
- (void)delChatRoomMemberFromInvitation:(id)a0;
- (void)handleRevokeInvitation:(id)a0 revokeHistory:(BOOL)a1;
- (void)deleteSingleUsr:(id)a0 message:(id)a1 revokeHistory:(BOOL)a2;
- (void)callRevokeHistoryThenRemoveMember:(id)a0 message:(id)a1;
- (void)removeChatRoomMember:(id)a0 scene:(unsigned long long)a1;
- (void)handleRevokeHistoryRecord:(id)a0 usrname:(id)a1;
- (void)handleRevokeHistoryFail:(id)a0 failMsg:(id)a1 operUsr:(id)a2;
- (void)handleRevokeHistorySuccessForUsr:(id)a0;
- (void)onDelUsrs:(id)a0 success:(BOOL)a1;
- (void)showLoadingWithText:(id)a0;
- (void)stopLoadingAndShowOkWithText:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onChatroomMemberRemoveViewCancel;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void).cxx_destruct;

@end
