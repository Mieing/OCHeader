@class SendVerifyMsgBusinessCardImageLogic, NSString, NSMutableDictionary;

@interface FriendAsistSessionMgr : MMUserService <MMServiceProtocol, IMsgExt, IMMNewSessionMgrExt, IContactMgrExt> {
    NSMutableDictionary *m_dicUnReadCount;
}

@property (retain, nonatomic) SendVerifyMsgBusinessCardImageLogic *businessCardImageLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)init;
- (unsigned int)getUnreadCountForChat:(id)a0;
- (id)GetHelloUsers:(id)a0 Limit:(int)a1 OnlyUnread:(BOOL)a2;
- (id)GetHelloMsg:(id)a0 HelloUser:(id)a1 Limit:(int)a2 OnlyTo:(BOOL)a3;
- (void)ClearUnRead:(id)a0 HelloUser:(id)a1;
- (void)ClearMsg:(id)a0;
- (void)ClearMsg:(id)a0 HelloUser:(id)a1;
- (id)GetLastMessage:(id)a0 OnlyTo:(BOOL)a1;
- (id)GetLastMessage:(id)a0 HelloUser:(id)a1 OnlyTo:(BOOL)a2;
- (void)AddHelloMsg:(id)a0 helloWord:(id)a1 opCode:(unsigned int)a2;
- (void)AddFirstHelloMsg:(id)a0 helloWord:(id)a1 opCode:(unsigned int)a2;
- (BOOL)SetSayHelloStatus:(id)a0 LocalID:(unsigned int)a1 Status:(unsigned int)a2;
- (unsigned int)GetSayHelloStatus:(id)a0 LocalID:(unsigned int)a1;
- (void)updateBlackContactHelloUnreadStatus:(unsigned int)a0;
- (void)asyncUpdateBlackContactHelloUnreadStatus:(unsigned int)a0;
- (id)getBusinessCardImageLogic;
- (void)setHadMMContactDeleteFlagToHelloMesWrap:(id)a0;
- (BOOL)clearHadDeleteHelloInInsertNewHelloMsg:(id)a0 HelloUser:(id)a1;
- (void)OnUnReadCountChange:(id)a0;
- (void)OnAddMsgForSpecialSession:(id)a0 MsgList:(id)a1;
- (void)OnMsgNotAddDBSession:(id)a0 MsgList:(id)a1;
- (void)moveOldData;
- (void)onSessionUpgrade;
- (void)onDeleteContact:(id)a0;
- (void)onRemoveContactFromAddressBook:(id)a0;
- (void)onNewContact:(id)a0;
- (id)genBusinessCardImgWrap:(id)a0;
- (void).cxx_destruct;

@end
