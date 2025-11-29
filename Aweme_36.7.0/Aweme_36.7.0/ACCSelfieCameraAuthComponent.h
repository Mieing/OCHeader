@class ACCRecordAuthServiceImpl, NSString, ACCRecordAuthStatus, ACCSelfieEmojiAuthorityView;
@protocol ACCRecorderViewContainer;

@interface ACCSelfieCameraAuthComponent : ACCFeatureComponent <ACCSelfieGuideService>

@property (retain, nonatomic) ACCSelfieEmojiAuthorityView *authorityView;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCRecordAuthServiceImpl *authService;
@property (retain, nonatomic) ACCRecordAuthStatus *authStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)showAuthorityViewIfNeeded;
- (void)didClickConfirmAction:(id)a0;
- (void)didClickCancleAction:(id)a0;
- (id)didAgreeProtocolKey;
- (void)showAuthorityView;
- (void)requestCameraAuth;
- (void).cxx_destruct;

@end
