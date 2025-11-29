@class NSArray, NSMutableArray, NSString;

@interface ForwardMessageReporter : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *sessionStack;
@property (retain, nonatomic) NSArray *arrForwardRecentUsedUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)pushSession;
- (id)popSession;
- (id)currentSession;
- (void)reportArrForwardRecentUsed:(id)a0;
- (void)reportClickHeadImage:(id)a0;
- (void)reportViewContentList:(id)a0;
- (void)reportClickChatroomContact:(id)a0;
- (void)reportClickSendButton:(id)a0 arrContacts:(id)a1 hasInput:(BOOL)a2 originSelectMsgList:(id)a3;
- (void)reportViewContentView:(id)a0;
- (void).cxx_destruct;

@end
