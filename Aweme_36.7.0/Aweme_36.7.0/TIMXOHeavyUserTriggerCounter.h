@class TIMXHeavyUserTriggerCounter, TIMXSDKInstance;

@interface TIMXOHeavyUserTriggerCounter : NSObject

@property (weak, nonatomic) TIMXSDKInstance *rootObject;
@property (retain, nonatomic) TIMXHeavyUserTriggerCounter *counter;
@property (copy, nonatomic) id /* block */ messageReceiveTPSChanged;
@property (copy, nonatomic) id /* block */ messageReceiveTPWChanged;
@property (copy, nonatomic) id /* block */ networkRequestTPSChanged;
@property (copy, nonatomic) id /* block */ networkRequestTPWChanged;

- (long long)networkRequestTPS;
- (long long)networkRequestTPW;
- (void)refreshNetworkRequestSatisfyStateWithCompletion:(id /* block */)a0;
- (long long)messageReceiveTPS;
- (long long)messageReceiveTPW;
- (void)refreshMessageReceiveSatisfyStateWithCompletion:(id /* block */)a0;
- (BOOL)messageReceiveTPSIsSatisfy;
- (BOOL)messageReceiveTPWIsSatisfy;
- (BOOL)networkRequestTPSIsSatisfy;
- (BOOL)networkRequestTPWIsSatisfy;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
