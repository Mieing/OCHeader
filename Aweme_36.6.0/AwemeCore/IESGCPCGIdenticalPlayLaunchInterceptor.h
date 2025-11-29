@class IESGCPXPlayGameAPI, NSString, IESGCPTimer;
@protocol IESGCPCGInitLaunchInterceptorOutput;

@interface IESGCPCGIdenticalPlayLaunchInterceptor : NSObject <IESGCPCGInterceptor>

@property (retain, nonatomic) IESGCPTimer *pollingTimer;
@property (nonatomic) long long pollingTimerCount;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (copy, nonatomic) id /* block */ responderCompletion;
@property (retain, nonatomic) id<IESGCPCGInitLaunchInterceptorOutput> rejectOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleMapNotReady;
- (void)_trackMapPollingStart;
- (void)_enterGameWithNewGameMapId:(id)a0;
- (void)_startPollingRequestWithCompletion:(id /* block */)a0;
- (void)_trackMapPollingFail;
- (void)_trackMapPollingSuccess;
- (void)_scheduleNextRequestWithCompletion:(id /* block */)a0;
- (void)_doMapStatusRequestWithCompletion:(id /* block */)a0;
- (void)_requestGetGameMap:(id /* block */)a0;
- (void)doInterceptWithContext:(id)a0 completion:(id /* block */)a1;
- (id)instance;
- (void).cxx_destruct;
- (id)name;
- (id)init;
- (long long)priority;
- (id)gameModel;

@end
