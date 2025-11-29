@class RTVVoipStreamExceptionTask, NSString, RTVStreamMonitorSetting, NSMutableArray, RTVVoipMonitor, RxScheduler, NSObject, RTVVoipSession;
@protocol RxInjector, RTVXREngine, RTVVoipSessionStoreInterface, RTVXRControllerInjector, OS_dispatch_queue, RTVMonitor, RTVStateMachineInterface, RTVUserProfileManagerInterface;

@interface RTVVoipStreamExceptionMonitor : NSObject <RTVXREngineDelegate, RTVVoipStreamExceptionMonitor, RTVXRControllerInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMachineMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _engineMutex;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) RTVStreamMonitorSetting *setting;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVVoipSessionStoreInterface> sessionStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain, nonatomic) NSMutableArray *stack;
@property (retain) RTVVoipStreamExceptionTask *leaveTask;
@property (weak, nonatomic) id<RTVStateMachineInterface> stateMachine;
@property (weak) id<RTVXREngine> engine;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (nonatomic) BOOL selfDidJoinRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)__unlock;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__log:(id)a0;
- (void)xrEngine:(id)a0 willJoinRoom:(id)a1;
- (void)xrEngine:(id)a0 didJoinRoom:(id)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 newSessionCreatedLocal:(BOOL)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 didLeaveRoom:(id)a1;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteAudioFrameOfUid:(id)a1;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)xrEngine:(id)a0 remoteVideoStats:(id)a1;
- (void)xrEngine:(id)a0 remoteAudioStats:(id)a1;
- (void)monitorWithType:(unsigned long long)a0;
- (void)__trackUserExceptionWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;
- (void)monitorWithType:(unsigned long long)a0 voip:(id)a1 engine:(id)a2;
- (double)__delayTimeInterval;
- (void)__reportIfNeedWithTime:(double)a0 cause:(id)a1 voipStreamException:(id)a2;
- (double)__overtimeMSDuration;
- (void)__monitorExceptionWhenFirstRemoteFrameArriveIfNeeded:(id)a0;
- (void)__checkUserIDIsException:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)__lock;

@end
