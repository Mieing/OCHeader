@class ChatRoomInvitationWrap, NSString, NSMutableDictionary, MMUIView, MMUILabel;

@interface NewChatRoomInvitationListViewController : ChatRoomInvitationListViewController <IMMQRCodeExt> {
    NSMutableDictionary *m_cellInfoCache;
    MMUILabel *m_hasReadLabel;
    MMUIView *m_hasReadLeftLineView;
    MMUIView *m_hasReadRightLineView;
}

@property (retain, nonatomic) ChatRoomInvitationWrap *handleInvitationWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)initEffectiveQRCodeInvitations;
- (Class)getChatRoomInvitationMultiMenuTableViewCellClass;
- (id)getChatRoomInvitationListEmptyTips;
- (void)handelApproveChatRoomInvitation:(id)a0 success:(BOOL)a1 errInfo:(id)a2;
- (void)makeHasReadSectionHeaderView;
- (void)addMultiMenu:(id)a0 invitationWrap:(id)a1;
- (void)handleTableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)genRevokeQRCodeIcon:(BOOL)a0 isDisable:(BOOL)a1;
- (void)handleRevokeQRCode:(id)a0;
- (BOOL)checkCanTapApproveForChatRoomInvitation:(id)a0;
- (id)genImageOfView:(id)a0;
- (void)showContactListPageSheet:(id)a0;
- (id)getCellInfoCacheForInvitation;
- (void)onRevokeChatroomQRCode:(id)a0 success:(BOOL)a1 errTip:(id)a2;
- (void)onGetChatRoomQRCodeStatus:(id)a0 arrResultChatRoomQRCode:(id)a1 success:(BOOL)a2 errTip:(id)a3;
- (void)updateInvalidQRCodeInCache:(id)a0;
- (void).cxx_destruct;

@end
