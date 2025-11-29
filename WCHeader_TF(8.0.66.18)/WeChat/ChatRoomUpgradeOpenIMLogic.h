@class CContact;
@protocol ChatRoomUpgradeOpenIMLogicDelegate;

@interface ChatRoomUpgradeOpenIMLogic : NSObject <IGroupMgrExt>

@property (weak, nonatomic) id<ChatRoomUpgradeOpenIMLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (nonatomic) unsigned int m_scene;

- (void)start;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)a0;
- (void)OnGetUpgradeAssociateChatRoom:(id)a0 withTicket:(id)a1 withResult:(unsigned int)a2 errorMsg:(id)a3 withResp:(id)a4;
- (void).cxx_destruct;

@end
