@class HMDThreadSafeArray, NSString, NSMutableSet, RTVVoipSession;
@protocol RTVVoipManagerInterface, RxInjector, RTVVoipSettingManagerInterface, RTVXRControllerInjector, RTVXREngine;

@interface RTVVoipSafetyTracker : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVXREngineDelegate, RTVVoipSafetyTrackerProtocol>

@property (retain, nonatomic) NSMutableSet *acceptCallUIMarkSet;
@property (retain, nonatomic) HMDThreadSafeArray *acceptCallUIMarkSafetyArray;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, weak, nonatomic) id<RTVXREngine> xrEngine;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (BOOL)isVoipCallAcceptedWithUser:(id)a0;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)addAnswerCallUIMark:(id)a0;
- (void)renderXREngine:(id)a0;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)xrEngine:(id)a0 videoCaptureStateChange:(unsigned long long)a1;
- (void)xrEngine:(id)a0 audioCaptureStateChange:(unsigned long long)a1;
- (BOOL)isVoipSessionRunning;
- (void)__trackEvent:(id)a0;
- (void)removeAnswerCallWithUI:(id)a0;
- (BOOL)__enableSafetyTracker;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
