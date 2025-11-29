@class UIView, AVSampleBufferDisplayLayer, NSString, TXPictureInPictureView, NSObject, TXSampleBufferWrapper, AVPictureInPictureController, TXLivePixelBufferTransform, TXPictureInPictureBlackFrame;
@protocol OS_dispatch_queue, OS_dispatch_source, TXLivePictureInPictureControllerDelegate;

@interface TXLivePictureInPictureController : NSObject <AVPictureInPictureControllerDelegate, AVPictureInPictureSampleBufferPlaybackDelegate, TXLivePictureInPictureRendererObserver>

@property (class, readonly, nonatomic) BOOL isPictureInPictureSupported;

@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) AVSampleBufferDisplayLayer *displayLayer;
@property (retain, nonatomic) TXPictureInPictureView *displayView;
@property (nonatomic) BOOL isSupported;
@property (weak, nonatomic) UIView *superView;
@property (nonatomic) BOOL useBlackFrame;
@property (retain, nonatomic) TXPictureInPictureBlackFrame *blackFrame;
@property unsigned long long frameWidth;
@property unsigned long long frameHeight;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL videoMuted;
@property (retain) TXSampleBufferWrapper *videoFrame;
@property (retain, nonatomic) TXLivePixelBufferTransform *pbTransform;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL isPictureInPictureEnabled;
@property (weak, nonatomic) id<TXLivePictureInPictureControllerDelegate> delegate;
@property int fillMode;
@property int rotation;
@property (nonatomic) BOOL enable;
@property BOOL playbackPaused;
@property BOOL playbackStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setRenderView:(id)a0;
- (void)refreshPlaybackState;
- (void)muteVideo:(BOOL)a0;
- (void)startPlay:(id)a0;
- (void)enableIfUrlSupported:(BOOL)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)setupDisplayView;
- (void)resetDisplayView;
- (void)setupPipController;
- (void)resetPipController;
- (void)startBlackFrameTimer;
- (void)stopBlackFrameTimer;
- (void)onRenderVideoFrame:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)cropFrameIfNeeded:(struct __CVBuffer { } *)a0;
- (struct CGSize { double x0; double x1; })calculateOutSize:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)onRenderBlackFrame;
- (struct CGSize { double x0; double x1; })calculateOutSizeWithFrameSize:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1 fillMode:(int)a2 rotation:(int)a3;
- (void)enqueueSampleBufferToLayer:(id)a0;
- (void)embedViewIn:(id)a0;
- (void)onPictureInPictureRender:(struct __CVBuffer { } *)a0;
- (void)onVideoResolutionChangedWithWidth:(long long)a0 height:(long long)a1;
- (void)onAppBecomeActive:(id)a0;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)a0;
- (void)pictureInPictureController:(id)a0 didTransitionToRenderSize:(struct { int x0; int x1; })a1;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (void)pictureInPictureController:(id)a0 skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
