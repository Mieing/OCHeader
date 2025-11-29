@class IESLivePaidAuthAPI, IESLivePaidAuthConfig, NSHashTable, IESLiveGCDTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface IESLivePaidStreamAuth : NSObject <IESLivePaidAuth>

@property (retain, nonatomic) NSHashTable *authEventHandlers;
@property (retain, nonatomic) IESLivePaidAuthAPI *api;
@property (nonatomic) double heartBeatDuration;
@property (nonatomic) unsigned long long retType;
@property (nonatomic) unsigned long long promiseType;
@property (retain, nonatomic) IESLivePaidAuthConfig *authConfig;
@property (retain, nonatomic) IESLiveGCDTimer *pingTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleChannelMessage:(id)a0;
- (BOOL)hasRet;
- (BOOL)hasPromised;
- (void)registerAuthEventHandler:(id)a0;
- (void)log:(id)a0 extraParams:(id)a1;
- (void)reuse:(id)a0;
- (void)unregisterAuthEventHandler:(id)a0;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredAuthEventHandlers;
- (void)sendEventWillStartAuth;
- (void)sendEventDidStartAuth:(unsigned long long)a0;
- (void)sendEventDidEndAuth:(unsigned long long)a0;
- (void)reportStartTrialInfo;
- (void)reportLeaveTrialInfo;
- (void)reportPromiseInfo;
- (void)requestAuthInfo:(id /* block */)a0;
- (void)start:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendEventDidGetTrialDuration:(double)a0;
- (void)sendEventDidEndPolling;
- (void)sendEventWillStartPolling;
- (void)sendEventManualPromise:(id /* block */)a0;
- (void)sendEventWillStartPromise;
- (void)sendEventDidEndPromise:(id)a0;
- (void)sendEventDidChangeRetType:(unsigned long long)a0 retSource:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)sendEventDidChangePromiseType:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)verifyAuthChangeForAuthID:(long long)a0 retType:(long long)a1 retSource:(unsigned long long)a2 delivery:(BOOL)a3 needDeliveryNotice:(BOOL)a4 heartBeatDuration:(double)a5 reason:(unsigned long long)a6;
- (void)reportLeaveTrialInfoNeedAuth:(BOOL)a0;
- (void)freeTrialToPaiedTestForRsp:(id)a0 error:(id)a1 reason:(unsigned long long)a2;
- (void)gotoPromise:(id /* block */)a0;
- (void)changeToDisableRet:(unsigned long long)a0 retSource:(unsigned long long)a1;
- (void)changeToRet:(unsigned long long)a0 retSource:(unsigned long long)a1;
- (void)updatePromiseType:(unsigned long long)a0 reason:(unsigned long long)a1;
- (void)gotoPromiseWithReason:(unsigned long long)a0 shouldManualPromise:(BOOL)a1;
- (void)updateRetType:(unsigned long long)a0 retSource:(unsigned long long)a1 reason:(unsigned long long)a2;
- (long long)getCurrentPingType:(long long)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)leave;
- (void)startHeartBeat;
- (void)stopHeartBeat;

@end
