@class AVPictureInPictureController, AVPlayerLooper, AVQueuePlayer, AVPlayerLayer;

@interface AWEIMPictureInPictureGuide : NSObject

@property (retain, nonatomic) AVQueuePlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) id holdSelf;
@property (copy, nonatomic) id /* block */ statusChangedBlock;

- (void)p_updateStatus:(unsigned long long)a0;
- (void)minimizeApp;
- (void)startPIPGuideInView:(id)a0 URL:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)appDidBecomeActive;

@end
