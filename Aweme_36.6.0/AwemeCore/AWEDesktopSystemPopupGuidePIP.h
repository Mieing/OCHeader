@class AVPictureInPictureController, NSString, AVQueuePlayer, AVPlayerLayer, AVPlayerLooper, AWEDesktopSystemPictureInPictureViewModel;

@interface AWEDesktopSystemPopupGuidePIP : NSObject <AVPictureInPictureControllerDelegate>

@property (copy, nonatomic) NSString *pipVideoResourcePath;
@property (copy, nonatomic) NSString *pipVideoUrlPath;
@property (retain, nonatomic) AVQueuePlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) id holdSelf;
@property (nonatomic) BOOL hasAlreadyStartPIP;
@property (retain, nonatomic) AWEDesktopSystemPictureInPictureViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)minimizeApp;
- (void)startPIPGuideInView:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
