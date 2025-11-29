@class NSString, TIMXOHeavyUserTriggerCounter;

@interface IESIMHeavyUserSDKTriggerCounter : NSObject <IESIMLoginManagerMessage>

@property (retain) TIMXOHeavyUserTriggerCounter *counter;
@property (copy, nonatomic) id /* block */ messageReceiveTPSChanged;
@property (copy, nonatomic) id /* block */ messageReceiveTPWChanged;
@property (copy, nonatomic) id /* block */ networkRequestTPSChanged;
@property (copy, nonatomic) id /* block */ networkRequestTPWChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)iesim_didFinishLogin;
- (long long)networkRequestTPS;
- (long long)networkRequestTPW;
- (void)refreshNetworkRequestSatisfyStateWithCompletion:(id /* block */)a0;
- (long long)messageReceiveTPS;
- (long long)messageReceiveTPW;
- (void)refreshMessageReceiveSatisfyStateWithCompletion:(id /* block */)a0;
- (void)p_createCounter;
- (BOOL)messageReceiveTPSIsSatisfy;
- (BOOL)messageReceiveTPWIsSatisfy;
- (BOOL)networkRequestTPSIsSatisfy;
- (BOOL)networkRequestTPWIsSatisfy;
- (void).cxx_destruct;
- (id)init;

@end
