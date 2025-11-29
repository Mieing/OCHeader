@class NSArray, RxScheduler, NSString, UIView, UILabel, UIButton;
@protocol AWEStudioAuthorityViewProtocol, RxInjector, RTVAuthorizationViewDelegate;

@interface RTVAuthorizationView : UIView <RTVAuthorizationViewInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UIView<AWEStudioAuthorityViewProtocol> *authorityView;
@property (readonly, nonatomic) UIButton *authorityCloseButton;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) NSArray *authorizationTypes;
@property (retain, nonatomic) UILabel *tipsTitleLabel;
@property (weak, nonatomic) id<RTVAuthorizationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)queryAuthorizationStatusWithType:(long long)a0;
- (void)automaticRequestAuthorization;
- (void)updateTitle:(id)a0 description:(id)a1;
- (void)__refreshComponents;
- (void)__createAuthView;
- (void)__createAuthCloseButton;
- (void)__jumpToApplicationSystemSetting;
- (void)__notifyAuthGrantedOfType:(long long)a0;
- (BOOL)__cameraNotAuth;
- (BOOL)__microphoneNotAuth;
- (void)__tapCloseButton:(id)a0;
- (void)__layoutAuthView;
- (void)__layoutAuthCloseButton;
- (BOOL)__isNeedCameraAuthWithAuthTypes:(id)a0;
- (BOOL)__allAuthGranted;
- (BOOL)__necessaryAuthGranted;
- (void)__requestCameraAuthorization;
- (void)__requestMicAuthorization;
- (void)__notifyIfAllAuthGranted;
- (void).cxx_destruct;
- (id)queryAuthorizationStatus;

@end
