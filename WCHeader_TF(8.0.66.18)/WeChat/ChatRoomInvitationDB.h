@class WCTDatabase, WCTTable;

@interface ChatRoomInvitationDB : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *table;

- (id)init;
- (void)reloadDatabase;
- (void)didRecoverDatabase;
- (id)tableForChatRoom:(id)a0;
- (id)tableNameForChatRoom:(id)a0;
- (id)getInvitationWithChatRoom:(id)a0 inviter:(id)a1 memberList:(id)a2 hasApproved:(BOOL)a3;
- (id)getInvitationWithChatRoomInQrcodeScene:(id)a0 inviter:(id)a1 memberList:(id)a2 hasApproved:(BOOL)a3 qrCode:(id)a4;
- (id)getInvitationWithChatRoom:(id)a0 svrId:(long long)a1;
- (id)getEffectiveInvitationsInQRCodeSceneWithChatRoom:(id)a0;
- (BOOL)batchUpdateInvitationQRCodeDisabledWithChatRoom:(id)a0 arrQRCode:(id)a1;
- (BOOL)updateInvitationQRCodeDisabledWithChatRoom:(id)a0 svrId:(long long)a1;
- (id)getInvitationWithChatRoom:(id)a0 oneOfHistoryMsgId:(long long)a1;
- (id)getLastInvitationWithChatRoom:(id)a0;
- (id)getInvitationsWithChatRoom:(id)a0;
- (BOOL)replaceInvitationWithChatRoom:(id)a0 oldInvitationId:(long long)a1 newInvitation:(id)a2;
- (BOOL)addNewInvitationWithChatRoom:(id)a0 invitation:(id)a1;
- (BOOL)updateInvitationWithChatRoom:(id)a0 invitation:(id)a1;
- (BOOL)deleteInvitationWithChatRoom:(id)a0 svrId:(long long)a1;
- (BOOL)deleteAllInvitationsWithChatRoom:(id)a0;
- (BOOL)deleteInvitationsWithChatRoom:(id)a0 offset:(long long)a1;
- (unsigned int)getCountWithChatRoom:(id)a0 afterTime:(unsigned int)a1;
- (void).cxx_destruct;

@end
