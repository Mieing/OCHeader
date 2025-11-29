@class NSString, NSMutableDictionary, NSMutableSet, WAAppTask;

@interface WAAgentService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicPendingCommands;
@property (retain, nonatomic) NSMutableDictionary *dicCompletedCommands;
@property (retain, nonatomic) NSMutableDictionary *dicCDPContext;
@property (retain, nonatomic) NSMutableDictionary *dicAgentResult;
@property (retain, nonatomic) NSMutableSet *setInterruptedSessionId;
@property (retain, nonatomic) NSMutableDictionary *dicPauseCmdIds;
@property (retain, nonatomic) NSMutableDictionary *dicSessionIdSnapshotStack;
@property (nonatomic) long long cdpEventCallbackId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runCommand:(NSString *)a0 sessionId:(NSString *)a1 task:(WAAppTask *)a2 completionHandler:(void (^)(void))a3;
- (void)onServiceInit;
- (void)interruptAgentTaskBySessionId:(id)a0 state:(unsigned long long)a1 dismissTask:(BOOL)a2;
- (void)interruptAgentTaskBySessionId:(id)a0 state:(unsigned long long)a1 dismissTask:(BOOL)a2 keepSession:(BOOL)a3;
- (BOOL)sessionIdHasInterrupted:(id)a0;
- (id)getAgentResultForAppid:(id)a0;
- (void)saveAgentResult:(id)a0 forAppid:(id)a1;
- (id)getCDPContextForSessionId:(id)a0;
- (void)bindAppid:(id)a0 toSessionId:(id)a1;
- (void)removeAppid:(id)a0 fromSessionId:(id)a1 state:(unsigned long long)a2;
- (id)getTopAppTaskWithSessionId:(id)a0;
- (id)getRootAppTaskWithSessionId:(id)a0;
- (id)getAppTaskListWithSessionId:(id)a0;
- (void)saveSnapshotStackForSessionId:(id)a0;
- (id)getSnapshotStackWithSessionId:(id)a0;
- (id)getAppIdNextToTaskInSnapshotStack:(id)a0;
- (void)resumeAgentTaskCommand:(id)a0;
- (void)onChatBotBypNewCmdGet:(id)a0 sessionId:(id)a1 cmdId:(id)a2 username:(id)a3 callId:(id)a4 context:(id)a5;
- (void)preprocessCDPCommand:(id)a0 sessionId:(id)a1 cmdId:(id)a2 username:(id)a3 callId:(id)a4 context:(id)a5;
- (void)onCDPCommandEnd:(id)a0;
- (void)requestAgentCgi:(id)a0;
- (void)addCompletedCommand:(id)a0;
- (void)removeCompletedCommandArray:(id)a0;
- (void)addPendingCommand:(id)a0;
- (void)removePendingCommand:(id)a0;
- (id)getPendingCommandsForKey:(id)a0;
- (void)addPauseCmdId:(id)a0 forSessionId:(id)a1;
- (void)removePauseCmdId:(id)a0 forSessionId:(id)a1;
- (id)commandKeyForSessionId:(id)a0 cmdId:(id)a1;
- (void)handleLink:(id)a0 withExtraInfo:(id)a1;
- (void).cxx_destruct;

@end
