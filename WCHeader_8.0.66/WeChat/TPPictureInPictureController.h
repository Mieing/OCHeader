@class NSString, AVPlayerLayer, AVPictureInPictureController;
@protocol TPPictureInPictureDelegate;

@interface TPPictureInPictureController : NSObject <AVPictureInPictureControllerDelegate> {
    AVPictureInPictureController *_pictureInPictureController;
    long long _state;
    AVPlayerLayer *_playerLayer;
}

@property (nonatomic) BOOL preloadAVPIPController;
@property (weak, nonatomic) id<TPPictureInPictureDelegate> delegate;
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (nonatomic) long long pictureInPictureStartDelayMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPictureInPictureSupported;

- (id)initWithPlayerLayer:(id)a0 preloadAVPIPController:(BOOL)a1;
- (void)dealloc;
- (void)startPictureInPicture;
- (void)stopPictureInPictureNotifyStopAsync:(BOOL)a0;
- (void)resetPipController;
- (id)makePipStateName:(long long)a0;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
