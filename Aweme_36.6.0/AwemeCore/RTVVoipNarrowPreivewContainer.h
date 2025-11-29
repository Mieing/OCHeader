@class RTVVoipNarrowAvatarView, NSString, RTVVoipNarrowPreivewViewModel, UILabel, RTVPreviewView;
@protocol RTVSessionPreviewProcotol, RxInjector, RTVXRStateRecorder, RTVXRControllerInjector, RTVVoipSettingManagerInterface, RTVXRCaptureController, RTVUserProfileManagerInterface, RTVVoIPCamDegradeControllerProtocol, RTVVoipNarrowPreivewContainerDelegate;

@interface RTVVoipNarrowPreivewContainer : UIView <RTVVoipSessionObserver, RTVXRCaptureControllerObserver, RTVVoipNarrowPreviewProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (retain, nonatomic) RTVPreviewView *preview;
@property (retain, nonatomic) RTVPreviewView *deputyPreview;
@property (retain, nonatomic) UILabel *statusDescriptionLabel;
@property (retain, nonatomic) RTVVoipNarrowAvatarView *avatarView;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (copy, nonatomic) NSString *currentSpeakingUserID;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManger;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) RTVVoipNarrowPreivewViewModel *viewModel;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) id<RTVVoIPCamDegradeControllerProtocol> degradeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTVVoipNarrowPreivewContainerDelegate> delegate;

- (void)rtv_awakeFromControllerInjector;
- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:(id)a0;
- (void)notifyChangeActive:(BOOL)a0;
- (void)voipSessionCallerRequestRoomFinished:(BOOL)a0 session:(id)a1;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (void)xrCaptureController:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })__narrowPreviewSimpleSize;
- (void)__refreshNarrowPreivew:(BOOL)a0;
- (void)__setupVideoPreviewIfNeed;
- (BOOL)__isFixDegradeControllerSupport;
- (id)__viewModelWithVoipParticipators:(id)a0;
- (struct CGSize { double x0; double x1; })__narrowPreviewFullSize;
- (id)__noneParticipatorViewModel;
- (id)__oneParticipatorViewModelWithVoipParticipators:(id)a0;
- (BOOL)__isBackgroundWindowSupport;
- (id)__twoParticipatorsViewModelWithSelf:(id)a0 other:(id)a1;
- (id)__moreThanTwoParticipatorsViewModelWithVoipParticipators:(id)a0;
- (void)switchToNarrow:(BOOL)a0 withAnimator:(id)a1;
- (id)currentPiPParticipator;
- (void).cxx_destruct;
- (double)preferredCornerRadius;
- (unsigned long long)previewType;

@end
