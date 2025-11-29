@class AVPictureInPictureController, VoIPCanvas, AVPictureInPictureVideoCallViewController, VoIPPIPView, NSString, NSObject;
@protocol OS_dispatch_queue, MTLDepthStencilState, MTLDevice, MTLRenderPipelineState, MTLBuffer;

@interface VoIPPIPService : MMUserService <IVOIPExt, VoipUIManagerExt, IVOIPModeSwitchExt, MMServiceProtocol, AVPictureInPictureControllerDelegate> {
    float _windowVertexData[16];
    float _smallWindowVertexData[16];
}

@property (retain, nonatomic) AVPictureInPictureVideoCallViewController *viewController;
@property (retain, nonatomic) AVPictureInPictureController *controller;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isWorking;
@property (nonatomic) BOOL isAutoDismissed;
@property (nonatomic) BOOL isTalking;
@property (nonatomic) BOOL isOpened;
@property (nonatomic) BOOL isCaller;
@property (nonatomic) BOOL isAudio;
@property (retain, nonatomic) VoIPCanvas *canvas;
@property (retain, nonatomic) VoIPPIPView *view;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLDepthStencilState> depthStencilState;
@property (retain, nonatomic) id<MTLRenderPipelineState> windowRenderPipelineState;
@property (retain, nonatomic) id<MTLBuffer> windowVertexBuffer;
@property (retain, nonatomic) id<MTLRenderPipelineState> smallWindowRenderPipelineState;
@property (retain, nonatomic) id<MTLBuffer> smallWindowVertexBuffer;
@property (nonatomic) float smallWindowVertexByteLeft;
@property (nonatomic) float smallWindowVertexByteRight;
@property (nonatomic) float smallWindowVertexByteTop;
@property (nonatomic) float smallWindowVertexByteBottom;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultContentSize;
+ (id)renderPipelineStateWithFragmentFunction:(id)a0 device:(id)a1 library:(id)a2;

- (BOOL)isLocalAvatarHidden;
- (BOOL)isRemoteAvatarHidden;
- (void)resetIfShouldControllerStopPIP:(BOOL)a0;
- (void)reset;
- (void)close;
- (void)refreshContents;
- (void)setupIfShouldControllerStopPIP:(BOOL)a0;
- (void)setup;
- (void)open;
- (BOOL)reloadWindowVertexBufferWithWidth:(double)a0 height:(double)a1 isMirror:(BOOL)a2;
- (BOOL)customizeWindowRenderCommandEncoder:(id)a0 withYMetalTexutre:(struct __CVBuffer { } *)a1 UVMetalTexutre:(struct __CVBuffer { } *)a2 bufferWidth:(double)a3 bufferHeight:(double)a4 isMirror:(BOOL)a5;
- (BOOL)customizeWindowRenderCommandEncoder:(id)a0 withYMetalTexutre:(struct __CVBuffer { } *)a1 UVMetalTexutre:(struct __CVBuffer { } *)a2;
- (BOOL)reloadSmallWindowVertexBufferWithWidth:(double)a0 height:(double)a1 isMirror:(BOOL)a2;
- (BOOL)customizeSmallWindowRenderCommandEncoder:(id)a0 withYMetalTexutre:(struct __CVBuffer { } *)a1 UVMetalTexutre:(struct __CVBuffer { } *)a2 bufferWidth:(double)a3 bufferHeight:(double)a4 isMirror:(BOOL)a5;
- (id)init;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)clear;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)OnBeginTalk:(id)a0;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtRemoteCaptureResume;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteVideoMode;
- (void)OnBothVideoMode;
- (void)OnBothEarMode;
- (void)OnVideoModeChangeToVoiceMode;
- (void)UIManagerDidOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 startInApp:(BOOL)a2 isEarMode:(BOOL)a3 isAudioMode:(BOOL)a4 from:(unsigned long long)a5;
- (void)UIManagerDidClose;
- (void)UIManagerDidCollapseWindow;
- (void)UIManagerDidExtendWindow;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceDidReceiveAudioUnitCallbackFirstEachStartup;
- (void).cxx_destruct;

@end
