@class IESLiveInteractiveAudioView, IESLiveInteractionGuestPreviewView, UIView;
@protocol IESLiveSmallAudienceRequestViewDelegate, HTSLivePixelBufferCapturer, IESLiveRecoder;

@interface IESLiveSmallAudienceRequestView : UIView

@property (nonatomic) BOOL isAudioModeOn;
@property (retain, nonatomic) id<HTSLivePixelBufferCapturer> capturer;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL waitingForConnect;
@property (readonly, weak, nonatomic) id<IESLiveRecoder> camera;
@property (weak, nonatomic) UIView *controlContainer;
@property (weak, nonatomic) id<IESLiveSmallAudienceRequestViewDelegate> delegate;
@property (retain, nonatomic) IESLiveInteractiveAudioView *audioBackView;
@property (retain, nonatomic) IESLiveInteractionGuestPreviewView *cameraPreview;
@property (nonatomic) double previewCornerRadius;

- (void)didSetAttachingDIContext;
- (void)switchCameraSource;
- (void)loadBeautyResource;
- (void)setupViewsOnisAudio:(BOOL)a0;
- (void)updateAudioAnimation:(BOOL)a0;
- (void)updateVoiceWaveWithMicDress:(id)a0 userID:(id)a1;
- (void)updateAvatarURLList:(id)a0;
- (void)switchConnectMode;
- (void)stopAndHidePreView;
- (void)addCameraPreview:(id)a0;
- (id)removeCameraPreview;
- (long long)cameraPosition;
- (void).cxx_destruct;
- (id)init;
- (void)stopCapture;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })previewSize;
- (void)startPreview;
- (void)stopPreview;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)showCameraPreview;
- (unsigned long long)previewFrameRate;

@end
