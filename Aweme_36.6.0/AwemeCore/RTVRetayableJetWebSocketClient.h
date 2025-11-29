@protocol RxRetryManagerInterface;

@interface RTVRetayableJetWebSocketClient : RTVJetWebSocketClient

@property (readonly, nonatomic) id<RxRetryManagerInterface> retryManager;

- (void)rxAwakeFromPropertyInjection;
- (id)enqueue:(id)a0 observer:(id)a1;
- (void).cxx_destruct;

@end
