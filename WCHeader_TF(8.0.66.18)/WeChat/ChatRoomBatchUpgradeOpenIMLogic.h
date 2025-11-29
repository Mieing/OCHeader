@class NSString, NSArray, NSMutableDictionary;
@protocol ChatRoomBatchUpgradeOpenIMLogicDelegate;

@interface ChatRoomBatchUpgradeOpenIMLogic : MMObject <IGroupMgrExt> {
    NSMutableDictionary *m_upgradeChatRoomDicResult;
}

@property (weak, nonatomic) id<ChatRoomBatchUpgradeOpenIMLogicDelegate> m_delegate;
@property (retain, nonatomic) NSString *chatRoomBatchUpgradeOpenIMTicket;
@property (retain, nonatomic) NSArray *m_upgradeOpenIMChatRoomUsrNameAr;
@property (retain, nonatomic) NSArray *m_normalChatRoomUsrNameAr;

+ (void)reportBatchUpgradeAssociateChatRoomWithRecomdCount:(unsigned long long)a0 andIsClickMore:(BOOL)a1 andRecomdSelectCount:(unsigned long long)a2 andOtherSelectCount:(unsigned long long)a3 andIsClickChange:(BOOL)a4 andTicketId:(id)a5 andOtherCount:(unsigned long long)a6;
+ (void)reportBatchUpgradeAssociateChatRoomResultWithRecomdSuccessCount:(unsigned long long)a0 andRecomdFailCount:(unsigned long long)a1 andOtherSuccessCount:(unsigned long long)a2 andOtherFailCount:(unsigned long long)a3 andSuccessRoomUsrNameList:(id)a4 andTicketId:(id)a5;

- (id)init;
- (void)start;
- (void)startBatchUpgradeAssociateChatRoom:(id)a0;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)a0;
- (void)OnGetUpgradeAssociateChatRoom:(id)a0 withTicket:(id)a1 withResult:(unsigned int)a2 errorMsg:(id)a3 withResp:(id)a4;
- (void)OnUpgradeAssociateChatRoom:(id)a0 withTicket:(id)a1 withResult:(unsigned int)a2 errorMsg:(id)a3;
- (void)reportBatchUpgradeAssociateChatRoom;
- (void).cxx_destruct;

@end
