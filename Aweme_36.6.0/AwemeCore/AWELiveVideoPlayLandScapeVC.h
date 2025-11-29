@class UIImageView, NSDictionary, UIView, IESLiveVideoPlayer;
@protocol IESLiveOrientationConfig;

@interface AWELiveVideoPlayLandScapeVC : UIViewController

@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (weak, nonatomic) IESLiveVideoPlayer *videoPlayer;
@property (weak, nonatomic) UIView *videoPlayView;
@property (retain, nonatomic) UIView *playView;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) NSDictionary *attrs;

- (void)trackClick;
- (void)videoPause;
- (void)forceUpdateTopPortrait;
- (id)initWithVideoPlayer:(id)a0 videoPlayView:(id)a1 attrs:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
