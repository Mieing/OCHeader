@class NSString, RxScheduler, RTVVoipModel, RTVVoipWebService, RTVVoipMonitor, __RTVVoIPPatchTask;
@protocol RTVXRSettingsInterface, RxInjector, RTVEventObserver;

@interface __RTVVoipModelStore : NSObject <RTVVoipModelStoreInterface> {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (retain, nonatomic) RTVVoipModel *voip;
@property (retain, nonatomic) id<RTVEventObserver> observer;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RTVVoipWebService *webService;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) __RTVVoIPPatchTask *lastPatchTask;
@property (readonly, nonatomic) RTVVoipModel *currentVoip;
@property (readonly, nonatomic) long long voipType;
@property (readonly, nonatomic) long long callType;
@property (readonly, copy, nonatomic) NSString *fromUserIMID;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) long long sessionStatus;
@property (readonly, copy, nonatomic) NSString *callID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)enterFrom;
- (void)rxAwakeFromPropertyInjection;
- (BOOL)isOnTheCall;
- (BOOL)updateWithCallInfo:(id)a0;
- (void)updateWithVoip:(id)a0;
- (void)clearVoip;
- (BOOL)isCallingOrRinging;
- (BOOL)isRinging;
- (BOOL)isHangup;
- (BOOL)isSelfCameraOff;
- (id)currentParticipantor;
- (id)selfIMID;
- (id)getSessionTimeText;
- (BOOL)isActiveVoIP:(id)a0;
- (id)mergeWithVoip:(id)a0 mergeStrategy:(long long)a1;
- (id)updateStatusCode:(long long)a0 sessionStatus:(long long)a1 needPatch:(BOOL)a2;
- (id)updateVoip:(id)a0 statusCode:(long long)a1 sessionStatus:(long long)a2 needPatch:(BOOL)a3;
- (void)clearVoipFromStateMachineReset:(id)a0;
- (id)patchVoip:(id)a0;
- (void)__clearLastPatchTask;
- (BOOL)__isEnableUpdateModel:(id)a0 statusCode:(long long)a1 sessionStatus:(long long)a2;
- (id)__updateLastPatchTask:(id)a0;
- (id)__patchTask:(id)a0;
- (id)__lastPatchTask;
- (id)__lastPatchTaskResume;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (BOOL)isActive;
- (BOOL)isVideo;
- (BOOL)isAudio;
- (BOOL)hasAccepted;
- (BOOL)isCaller;

@end
