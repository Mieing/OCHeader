@class RxPromise, UIView, NSString, RxDeferred, RTVVoipMonitor, RTVVoipSession;
@protocol RTVVoipManagerInterface, RxInjector, RTVAuthorizationViewInterface;

@interface RTVVoipAuthorizationViewController : UIViewController <RTVAuthorizationViewDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RxDeferred *cameraAuthorizationDeferred;
@property (readonly, nonatomic) RxDeferred *microphoneAuthorizationDeferred;
@property (readonly, nonatomic) RxPromise *authorizationPromise;
@property (retain, nonatomic) RxDeferred *authorizationDeferred;
@property (readonly, nonatomic) UIView<RTVAuthorizationViewInterface> *cameraAuthorizationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)authorizationViewDidTapCloseButton;
- (void)authorizationViewCompleteAuthorize:(id)a0;
- (void)authorizationView:(id)a0 completeAuthorize:(long long)a1;
- (void)__checkAuthorization;
- (id)authorizationResultPromise;
- (id)__needAuthorizationTypesWithVoip:(id)a0;
- (void)__createAuthorizationView;
- (void)allowCameraAuthorizationComplete;
- (void)allowMicrophoneAuthorizationComplete;
- (void)allowCameraAndMicrophoneAuthorizationComplete;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
