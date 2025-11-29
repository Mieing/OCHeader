@class UIView, NSString, AFDPiPContext, AFDPiPContainerView, NSMutableDictionary, AFDPiPSampleBufferDisplayView, UIViewController, AVPictureInPictureController;
@protocol AFDPiPControllerDelegate, AFDPiPContextProvider;

@interface AFDPiPController : NSObject <AVPictureInPictureSampleBufferPlaybackDelegate, AVPictureInPictureControllerDelegate>

@property (class, readonly, nonatomic) AFDPiPController *activeInstance;

@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) AFDPiPSampleBufferDisplayView *sampleBufferDisplayView;
@property (retain, nonatomic) AFDPiPContainerView *containerView;
@property (retain, nonatomic) AFDPiPContext *restoreContext;
@property (nonatomic) BOOL isWaitingForAutomaticInlinePiP;
@property (nonatomic) BOOL isSynchronizingPlaybackTime;
@property (nonatomic) BOOL isRestoreUserInterfaceStop;
@property (nonatomic) BOOL isRestoringWhenBecomeActive;
@property (nonatomic) BOOL isStopping;
@property (retain, nonatomic) AFDPiPContext *context;
@property (retain, nonatomic) UIView *snapshotForContentViewDuringStartingPiP;
@property (nonatomic) BOOL isSeekingWithPiP;
@property (retain, nonatomic) NSString *seekingItemID;
@property (nonatomic) BOOL shouldSeekCompletion;
@property (copy, nonatomic) id /* block */ seekCompletionHandler;
@property (nonatomic) BOOL shouldStartPiPAutomatically;
@property (weak, nonatomic) id<AFDPiPContextProvider> contextProvider;
@property (weak, nonatomic) id<AFDPiPControllerDelegate> delegate;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSMutableDictionary *activationInfo;
@property (retain, nonatomic) UIViewController *pipViewController;
@property (nonatomic) BOOL isNeedChangeSnapshotViewLevel;
@property (nonatomic) BOOL needForcePlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCanStartPiPAutomatically:(BOOL)a0;
- (void)preparePiPWithContainerView:(id)a0 andVideoHeight:(double)a1;
- (void)stopWaitingForAutomaticInlinePiP;
- (void)ensureAudioSessionCategory;
- (void)restoreContentView;
- (void)invalidateRate;
- (void)invalidatePlaybackTime;
- (void)invalidatePlayback;
- (void)handlePiPEventWithEventName:(id)a0 info:(id)a1;
- (void)clearSampleBufferDisplayView;
- (void)preparePlayerLayerIfNeededWithLayer:(id)a0;
- (void)stopPiP;
- (void)suspendApp;
- (void)updateContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)startPiP;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)setRequiresLinearPlayback:(BOOL)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (id)init;
- (void)dealloc;
- (void)updateContext;
- (void)invalidateContext;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pictureInPictureControllerTimeRangeForPlayback:(id)a0;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (void)pictureInPictureController:(id)a0 didTransitionToRenderSize:(struct { int x0; int x1; })a1;
- (void)pictureInPictureController:(id)a0 skipByInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;

@end
