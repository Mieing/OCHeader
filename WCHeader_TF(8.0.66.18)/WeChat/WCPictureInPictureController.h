@class AVPictureInPictureController, NSString, AVPlayerLayer;
@protocol WCPictureInPictureDelegate;

@interface WCPictureInPictureController : NSObject <AVPictureInPictureControllerDelegate>

@property (weak, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) long long initTimeMs;
@property (retain, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (weak, nonatomic) id<WCPictureInPictureDelegate> delegate;
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic) long long state;
@property (nonatomic) BOOL enablePictureInPictureSeekButton;
@property (nonatomic) int taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPictureInPictureSupported;

- (id)initWithPipContentSource:(id)a0;
- (id)initWithPlayerLayer:(id)a0;
- (void)initResource;
- (void)dealloc;
- (void)changePipContentSource:(id)a0;
- (void)observePipState;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
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
