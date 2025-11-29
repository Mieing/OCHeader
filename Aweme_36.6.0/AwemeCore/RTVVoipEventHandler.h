@class RxMultipleDelegate, RTVVoipToastHandler, RTVVoipManager, RTVVoipInvokeController;
@protocol RTVVoipEventObserver, RTVUserProfileManagerInterface, RxInjector, RTVVoipModelStoreInterface;

@interface RTVVoipEventHandler : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipEventObserver> *multipleObserver;
@property (readonly, nonatomic) RTVVoipManager *voipManager;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipToastHandler *toastHandler;
@property (readonly, nonatomic) RTVVoipInvokeController *voipInvokeController;

- (void)rxAwakeFromPropertyInjection;
- (void)handleReceiveEvent:(id)a0;
- (void)handleRecevieCommand:(id)a0;
- (id)__canHandleEvent:(id)a0;
- (void)__handleCancelCommandWithCallID:(id)a0;
- (void)__handleReceiveUnrecognizeEvent:(id)a0;
- (void)__handleEventCommandCameraOff;
- (void)__handleEventSelfRefuse;
- (void)__handleEventOtherRefuse;
- (void)__handleEventSelfCancel;
- (void)__handleReceiveCommandToast:(id)a0;
- (void)__handleReceiveCommandOtherDeviceAccepted:(id)a0;
- (id)__toastCommandContentWithEvent:(id)a0;
- (void)handleReceiveGameNotify:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
