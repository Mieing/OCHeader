@class UIViewController, AWEAntiAddictMaskContext;
@protocol AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWEAntiAddictMaskVideoPlayerWrapper : NSObject

@property (retain, nonatomic) AWEAntiAddictMaskContext *context;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol> *videoController;

- (void)updatePlayerIfNeeded;
- (void)updateCoverImage;
- (void)setVideoViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithContext:(id)a0;
- (BOOL)isPlaying;
- (void)stop;
- (id)videoView;
- (void)reset;
- (void)willDisplay;

@end
