@class NSString;

@interface ChatBotPrologueMsgMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)markMsgAsExposedWithMsgIdList:(id)a0;

@end
