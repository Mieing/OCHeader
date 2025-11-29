@class NSString, CContact, CContactVerifyLogic, NSArray, NSMutableArray;
@protocol AddMemLogicDelegate;

@interface AddMemLogic : MMObject <IChatRoomHistoryUploadExt, ChatRoomStateInvitationReasonPageSheetDelegate, MultiSelectContactsViewControllerDelegate, contactVerifyLogicDelegate, IGroupMgrExt, UITextFieldDelegate, MMTipsViewControllerDelegate> {
    NSMutableArray *m_arrNeedVerifyUsrName;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSArray *m_arrMemberList;
    NSString *m_historyUploadTaskId;
    NSArray *m_selectedMsgList;
    NSArray *m_waitingAddedMemerList;
    NSString *m_waitingDesp;
}

@property (weak, nonatomic) id<AddMemLogicDelegate> m_delegate;
@property (nonatomic) unsigned int m_viewScene;
@property (retain, nonatomic) CContact *m_oContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)start:(id)a0;
- (id)getErrorContactName:(id)a0;
- (id)genErrorString:(id)a0 withGroupVerify:(BOOL)a1;
- (BOOL)canShowUpgradeStatus;
- (void)OnAddGroupMember:(id)a0 withStatus:(unsigned int)a1 memberList:(id)a2 inviteList:(id)a3 Error:(id)a4 tipContent:(id)a5 historyInfo:(id)a6;
- (void)addGroupVerifySuccessSystemNodeView:(id)a0;
- (void)showDespAlertView:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)addMembersToChatRoom:(id)a0;
- (id)getHistoryInfoWithChatRoom:(id)a0 WithDesp:(id)a1;
- (BOOL)addMembersToChatRoom:(id)a0 WithDesp:(id)a1;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onMultiSelectWithMsgHistory:(id)a0 uploadTaskId:(id)a1;
- (void)onContactVerifyFail;
- (void)contactVerifyOk:(id)a0;
- (void)verifyContact;
- (void)OnInviteChatRoomMember:(id)a0 Ret:(int)a1 Error:(id)a2 withUserData:(id)a3;
- (void)onInviteAlert:(id)a0 isCancelButton:(BOOL)a1 historyInfo:(id)a2;
- (unsigned long long)getFTSCommonScene;
- (id)contactForContext;
- (void)onClickStateInvitationReasonSendWithText:(id)a0 arrMemberList:(id)a1;
- (void)onFailToAddMemberWithHistory;
- (BOOL)checkHistoryUploadInfo:(id)a0;
- (BOOL)shouldWaitHistoryUploadTask;
- (void)onHistoryUploadFinish:(id)a0 uploadInfo:(id)a1 errMsg:(id)a2;
- (void)onNewHistoryUploadFinish:(id)a0 uploadInfo:(id)a1;
- (void).cxx_destruct;

@end
