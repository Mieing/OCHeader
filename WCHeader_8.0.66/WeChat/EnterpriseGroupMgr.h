@class NSString;

@interface EnterpriseGroupMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)createEnterpriseGroup:(id)a0 extKey:(id)a1;
- (BOOL)quitEnterpriseGroup:(id)a0;
- (BOOL)addMemeberList:(id)a0 group:(id)a1 brand:(id)a2;
- (BOOL)deleteMemberList:(id)a0 group:(id)a1 brand:(id)a2;
- (BOOL)updateGroupName:(id)a0 groupName:(id)a1;
- (BOOL)updateGroupSetting:(id)a0 bizFlag:(unsigned int)a1;
- (BOOL)initiateBizChat:(id)a0 chatTitle:(id)a1 users:(id)a2 callBackId:(id)a3;
- (BOOL)convertBizChat:(id)a0 chatId:(id)a1 chatType:(id)a2 callBackId:(id)a3;
- (BOOL)updateGroupMemberListToSvr:(id)a0;
- (BOOL)updateGroupContactAttrToSvr:(id)a0;
- (void)handleCreateBizChatInfo:(id)a0;
- (void)handleUpdateBizChat:(id)a0;
- (void)handleUpdateBizChatMemberList:(id)a0;
- (void)handleQuitBizChat:(id)a0;
- (void)handleInitiateBizChat:(id)a0;
- (void)handleConvertBizChat:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
