@class NSSet, TIMXTriggerCounter, TIMXSDKInstance, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXHeavyUserTriggerCounter : NSObject <TIMXInstanceScopeSingleton>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (retain, nonatomic) TIMXTriggerCounter *messageReceiveCounter;
@property (retain, nonatomic) TIMXTriggerCounter *networkRequestCounter;
@property (copy, nonatomic) NSSet *monitorPaths;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ messageReceiveTPSChanged;
@property (copy, nonatomic) id /* block */ messageReceiveTPWChanged;
@property (copy, nonatomic) id /* block */ networkRequestTPSChanged;
@property (copy, nonatomic) id /* block */ networkRequestTPWChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)triggerNetworkRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;
- (void)receiveMessage:(id)a0;

@end
