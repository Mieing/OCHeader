@class NSString, NSMutableSet;

@interface ChatBotBypMsgMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *msgRecvedSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)chatBotBypNewCmdGet:(id)a0 cmdType:(int)a1 cmd:(id)a2 svrId:(unsigned long long)a3;
- (void).cxx_destruct;

@end
