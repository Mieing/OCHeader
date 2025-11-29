@class IESECMallVideoPlayerWrapper;

@interface IESECMallDeepFeedVideoPlayerView : UIView

@property (retain, nonatomic) IESECMallVideoPlayerWrapper *videoPlayer;

- (void).cxx_destruct;
- (id)init;
- (void)setMute:(BOOL)a0;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end
