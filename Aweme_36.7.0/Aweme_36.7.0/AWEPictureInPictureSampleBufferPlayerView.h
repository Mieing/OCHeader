@class NSString, AVSampleBufferDisplayLayer, AVPictureInPictureController;
@protocol AWEPictureInPicturePlayerViewDelegate;

@interface AWEPictureInPictureSampleBufferPlayerView : UIView <AWEPictureInPicturePlayerView, AVPictureInPictureSampleBufferPlaybackDelegate>

@property (retain, nonatomic) AVSampleBufferDisplayLayer *playerLayer;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double duration;
@property (weak, nonatomic) AVPictureInPictureController *pipController;
@property (nonatomic) double rate;
@property (nonatomic) BOOL stalled;
@property (weak, nonatomic) id<AWEPictureInPicturePlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)notifyError:(id)a0;
- (void)invalidatePlayback;
- (id)makePipController;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 duration:(double)a1;
- (void)resetDuration:(double)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)drawOneFrame;
- (struct opaqueCMSampleBuffer { } *)makeSampleBuffer;
- (void)notifyFailed:(id)a0;
- (struct opaqueCMSampleBuffer { } *)sampleBufferFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)prepareBeforeStartWithRate:(double)a0;
- (void).cxx_destruct;
- (double)currentTime;
- (void)seekToTime:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareToPlay;
- (void)syncProgress;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)a0;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (void)pictureInPictureController:(id)a0 didTransitionToRenderSize:(struct { int x0; int x1; })a1;
- (void)pictureInPictureController:(id)a0 skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;

@end
