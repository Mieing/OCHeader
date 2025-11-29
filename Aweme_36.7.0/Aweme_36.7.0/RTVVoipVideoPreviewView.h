@class NSString, RTVVoipVideoPreviewRecordIndicatorView, RTVVoipVideoPreviewAvatarView, UIView, RTVVoipVideoPreviewViewContext;
@protocol RTVUserProfileManagerInterface, RTVSessionPreviewProcotol, RTVVoipConfigureManagerInterface, RxInjector, RTVXRCaptureController, RTVVoipVideoPreviewViewDelegate;

@interface RTVVoipVideoPreviewView : UIView <RTVXREngineDelegate, RTVVoipVideoPreviewAvatarViewDelegate, RTVXRCaptureControllerObserver, RTVVoipSessionObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVVoipVideoPreviewAvatarView *avatarView;
@property (readonly, nonatomic) RTVVoipVideoPreviewRecordIndicatorView *recordIndicatorView;
@property (retain, nonatomic) UIView *remoteVideoLastFrameView;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configManager;
@property (readonly, nonatomic) id<RTVXRCaptureController> captureController;
@property (nonatomic) BOOL isApparent;
@property (nonatomic) BOOL isRenderingVideo;
@property (readonly, nonatomic) RTVVoipVideoPreviewViewContext *context;
@property (readonly, nonatomic) UIView *videoContentView;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (weak, nonatomic) id<RTVVoipVideoPreviewViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__log:(id)a0;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)__createDependency;
- (void)xrEngine:(id)a0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)xrEngine:(id)a0 onUserWillLeave:(id)a1;
- (void)xrEngine:(id)a0 didUserOffline:(id)a1 reason:(unsigned long long)a2;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)xrEngine:(id)a0 firstRemoteVideoDidRenderOfUid:(id)a1;
- (void)xrEngine:(id)a0 didVideoEnabled:(BOOL)a1 byUid:(id)a2;
- (void)xrEngine:(id)a0 didLocalVideoEnabled:(BOOL)a1 byUid:(id)a2;
- (void)xrEngine:(id)a0 didVideoMuted:(BOOL)a1 byUid:(id)a2;
- (void)switchLayout:(BOOL)a0 animator:(id)a1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)__setupVideoPreviewView;
- (void)__handleCameraOff:(BOOL)a0;
- (id)__remoteVideoLastFrameView;
- (void)__removeRemoteVideoLastFrameIfNeeded;
- (void)__showRemoteVideoLastFrameIfNeeded;
- (id)__currentProfileIMID;
- (id)__commonLogString;
- (id)__isLocalPreviewView;
- (id)__isRemotePreviewOfUID:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredInsetsWhenSimplelyAppear;
- (void)previewAvatarView:(id)a0 didClickAvatar:(id)a1;
- (void)notifyChangeToApparent:(BOOL)a0;
- (void)refreshVideoPreview;
- (BOOL)isShowingSimpleAvatarView;
- (BOOL)shouldShowAvatarWhenApparentAndDisplayVideo;
- (BOOL)__shouldHiddenAvatarView;
- (BOOL)isInLastRow;
- (void)__refreshVideoViewState;
- (id)__currentCameraIsOff;
- (BOOL)__shouldShowSimpleAvatarView;
- (BOOL)__firstFrameArrived;
- (double)__verticalOffsetSimpleAvatarView;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;

@end
