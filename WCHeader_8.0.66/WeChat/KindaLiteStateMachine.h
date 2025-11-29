@protocol KindaLiteEffects;

@interface KindaLiteStateMachine : NSObject

@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ sessionIdProvider;
@property (weak, nonatomic) id<KindaLiteEffects> effects;
@property (readonly, nonatomic) long long current;
@property (copy, nonatomic) id /* block */ stateChangeHandler;

- (id)initWithSessionIdProvider:(id /* block */)a0 effects:(id)a1;
- (id)stateName:(long long)a0;
- (id)effectNameForItem:(id)a0;
- (id)effectsSummary:(id)a0;
- (void)dispatchStartRequested:(id)a0 data:(id)a1;
- (void)dispatchStopRequested;
- (void)dispatchLiteAppDestroyed;
- (void)dispatchJsRunning;
- (void)dispatchJsPaying;
- (void)dispatchJsPaySucceeded;
- (void)dispatchStartFailed;
- (void)dispatchStartCancelled;
- (id)effect:(long long)a0;
- (void)dispatchWithReducer:(id /* block */)a0 reason:(id)a1;
- (void)reportUnexpectedEvent:(id)a0;
- (void)transitionTo:(long long)a0 reason:(id)a1;
- (void).cxx_destruct;

@end
