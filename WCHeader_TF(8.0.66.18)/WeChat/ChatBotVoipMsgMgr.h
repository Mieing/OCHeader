@class NSString;

@interface ChatBotVoipMsgMgr : MMUserService <IChatBotBypMsgExt, MMServiceProtocol, IMsgExt>

@property (copy, nonatomic) id /* block */ delaySendMsgTask;
@property (retain, nonatomic) NSString *cur_username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)notifyChatBotVoipRecvMessage:(id)a0;
- (void)notifyChatBotVoipMinimize;
- (void)notifyChatBotVoipNotifyToStopWeAppProcess:(BOOL)a0;
- (void)sendMsgToChatBot:(id)a0 scene:(long long)a1;
- (void)resetDelaySendMsgTask;
- (id)checkDelaySendMsgTask;
- (void)onChatBotBydProcessDataGet:(id)a0 username:(id)a1;
- (void).cxx_destruct;

@end
