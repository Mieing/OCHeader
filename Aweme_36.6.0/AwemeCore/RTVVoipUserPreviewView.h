@class UIView, NSString, RTVVoipSession, RTVVoipParticipator, UIImageView, RTVVoipUserPreviewViewContext, BDImageView, UILabel, RTVVoipRingtoneFloatingBarView;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVXRCaptureController, RxInjector;

@interface RTVVoipUserPreviewView : UIView <RTVVoipSessionObserver, RTVXREngineDelegate, RTVXRCaptureControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) RTVVoipUserPreviewViewContext *context;
@property (weak, nonatomic) RTVVoipParticipator *participator;
@property (copy, nonatomic) NSString *userIMID;
@property (readonly, nonatomic) id<RTVXRCaptureController> captureController;
@property (retain, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) RTVVoipRingtoneFloatingBarView *musicFloatingBar;
@property (retain, nonatomic) UIImageView *backgroundBlurView;
@property (readonly, nonatomic) UIView *videoPreview;
@property (readonly, nonatomic) BDImageView *roundAvatarView;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__addObserver;
- (void)__createComponents;
- (void)__log:(id)a0;
- (void)voipSession:(id)a0 typeDidChangeTo:(long long)a1 fromType:(long long)a2;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)voipSessionCallerRequestRoomFinished:(BOOL)a0 session:(id)a1;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)__updateComponents;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)xrEngine:(id)a0 didVideoMuted:(BOOL)a1 byUid:(id)a2;
- (void)__configureComponents;
- (void)__refreshUserInfoRegion;
- (void)__refreshVideoPreviewWithAnimation:(BOOL)a0;
- (id)__voipStatusDescription:(long long)a0;
- (void)__switchToVideoPreview:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)__switchToVideoPreview:(BOOL)a0;
- (id)__commonLogString;
- (void)__createRingtoneFloatingBarIfNeed;
- (void)__bindVideoPreviewViewWithSession:(id)a0 videoPreview:(id)a1 uid:(id)a2;
- (id)__isLocalPreviewView;
- (id)__isRemotePreviewOfUID:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
