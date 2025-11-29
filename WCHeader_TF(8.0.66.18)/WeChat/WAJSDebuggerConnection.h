@class WAJSCoreService;

@interface WAJSDebuggerConnection : NSObject <IWAJSDebuggerConnection>

@property (weak, nonatomic) WAJSCoreService *service;

- (id)initWithService:(id)a0;
- (void)sendMessage:(id)a0;
- (void)onMessage:(id)a0;
- (void)sendCustomMessage:(id)a0 payload:(id)a1;
- (void)onCustomMessage:(id)a0 payload:(id)a1;
- (void)onReceiveNetworkHeader:(id)a0;
- (void).cxx_destruct;

@end
