@class UIViewController, AVPictureInPictureController, NSString, UIView, IESLiveScreencastMsgPushPiPSampleBufferDisplayView;

@interface IESLiveScreencastMsgPushPiPController : NSObject <AVPictureInPictureSampleBufferPlaybackDelegate, AVPictureInPictureControllerDelegate>

@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) UIViewController *pipViewController;
@property (retain, nonatomic) IESLiveScreencastMsgPushPiPSampleBufferDisplayView *sampleBufferDisplayView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL shouldRecoverPIP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)ensureAudioSessionCategory;
- (void)clearSampleBufferDisplayView;
- (void)configPiPWithContainerView:(id)a0 andVideoHeight:(double)a1;
- (void)configControlsHidden:(BOOL)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void).cxx_destruct;
- (void)stopPictureInPicture;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)startPictureInPicture;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (id)init;
- (void)clearAll;
- (void)dealloc;
- (BOOL)isPictureInPictureActive;
- (void)startAudioSession;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)a0;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (void)pictureInPictureController:(id)a0 didTransitionToRenderSize:(struct { int x0; int x1; })a1;
- (void)pictureInPictureController:(id)a0 skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;

@end
