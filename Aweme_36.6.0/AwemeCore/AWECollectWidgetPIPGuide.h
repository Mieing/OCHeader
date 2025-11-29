@class AVPictureInPictureController, AVPlayerLooper, AVQueuePlayer, AVPlayerLayer, NSString;

@interface AWECollectWidgetPIPGuide : NSObject <AVPictureInPictureControllerDelegate>

@property (retain, nonatomic) AVQueuePlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) id holdSelf;
@property (nonatomic) double showTime;
@property (copy, nonatomic) NSString *guideType;
@property (nonatomic) BOOL zrWidgetPipGuideBlackScreenFixSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)minimizeApp;
- (void)trackPIPWindowEventWithType:(id)a0 ratio:(double)a1;
- (void)trackUGWidgetMidShow;
- (void)trackUGWidgetMidClickWithClickTarget:(id)a0;
- (id)initWithGuideType:(id)a0;
- (void)startPIPGuideWithURL:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void).cxx_destruct;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)appDidBecomeActive;

@end
