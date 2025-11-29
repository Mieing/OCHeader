@class NSString;

@interface BDARewardPitayaManager : NSObject <BDARewardPitayaProtocol, BDARInitializeHookProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeHooker;
+ (void)initializeHooker;
+ (void)initialize;
+ (id)sharedInstance;

- (BOOL)bdar_isReady;
- (id)readyNotificationName;
- (id)bdar_readyNotificationName;
- (void)requestUpdate:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)bdar_requestUpdate:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)runTask:(id)a0 params:(id)a1 config:(id)a2 completion:(id /* block */)a3;
- (void)bdar_runTask:(id)a0 params:(id)a1 config:(id)a2 completion:(id /* block */)a3;
- (void)registerReadyHandler:(id /* block */)a0;
- (id)rewardAgainBusinessName;
- (void)requestRewardAgainUpdateCompletion:(id /* block */)a0;
- (void)runRewardAgainTaskWithParams:(id)a0 completion:(id /* block */)a1;
- (void)runAudioEffectTaskWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isReady;

@end
