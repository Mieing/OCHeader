@class ChatRoomInvitationDB, NSMutableDictionary, NSString;

@interface ChatRoomInvitationMgr : MMUserService <IGroupMgrExt, IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) ChatRoomInvitationDB *db;
@property (retain, nonatomic) NSMutableDictionary *dicLastReadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)addNewChatRoomInvitationMessage:(id)a0;
- (id)getInvitationsWithChatRoom:(id)a0;
- (BOOL)batchUpdateInvitationQRCodeDisabledWithChatRoom:(id)a0 arrQRCode:(id)a1;
- (id)getEffectiveInvitationsInQRCodeSceneWithChatRoom:(id)a0;
- (id)invitationWrapFromMessageWrap:(id)a0;
- (BOOL)deleteChatRoomInvitation:(id)a0;
- (BOOL)deleteAllInvitationsWithChatRoom:(id)a0;
- (BOOL)updateInvitationsQRCodeDisabled:(id)a0 svrId:(long long)a1;
- (BOOL)approveChatRoomInvitation:(id)a0;
- (void)onChatRoomInvitationApproved:(id)a0;
- (void)onChatRoomInvitationApprovedWithChatRoom:(id)a0 svrId:(long long)a1;
- (void)OnApproveChatRoomInvitation:(id)a0 ErrorInfo:(id)a1 Success:(BOOL)a2 withUserData:(id)a3;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)updateLastReadTimeForChatRoom:(id)a0;
- (unsigned int)lastReadTimeForChatRoom:(id)a0;
- (unsigned int)unReadCountForChatRoom:(id)a0;
- (id)lastReadTimeFilePath;
- (void)loadLastReadTime;
- (void)saveLastReadTime;
- (void)updateSessionGreenLabel:(id)a0;
- (void).cxx_destruct;

@end
