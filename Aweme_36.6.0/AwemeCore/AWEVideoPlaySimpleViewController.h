@class AWEAwemePlayVideoPauseIcon, AWEDemaciaPlayerVideoModel, UIView, AWEDPlayerVideoModel, NSString, UIImageView, UIButton, AWEURLModel, NSDictionary, UIViewController, AWEVideoModel;
@protocol AWEDPlayerProtocol, AWEVideoPlayProgressDelegate, AWEDemaciaPlayerView;

@interface AWEVideoPlaySimpleViewController : UIViewController <AWEDemaciaPlayerViewDelegate, AWEDPlayerDelegate, AWESimpleViewControllerProtocol>

@property (retain, nonatomic) AWEAwemePlayVideoPauseIcon *pauseIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *circleCloseView;
@property (retain, nonatomic) UIView<AWEDemaciaPlayerView> *playerView;
@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *playerViewController;
@property (retain, nonatomic) AWEDemaciaPlayerVideoModel *playerModel;
@property (retain, nonatomic) AWEDPlayerVideoModel *videoModel;
@property (nonatomic) double playTime;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIImageView *playButton;
@property (nonatomic) BOOL repeated;
@property (readonly, nonatomic) long long playState;
@property (retain, nonatomic) AWEVideoModel *video;
@property (retain, nonatomic) AWEURLModel *playURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) id /* block */ loopHandler;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (nonatomic) double initPlayTime;
@property (weak, nonatomic) id<AWEVideoPlayProgressDelegate> playerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)demaciaPlayerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)initWithCoverImage:(id)a0;
- (BOOL)useGeneralPlayer;
- (void)loadImageUrl;
- (void)loadImageUrl:(id)a0;
- (void)showPlayButton;
- (void)playerViewTapped:(id)a0;
- (id)commonParamsForDPlayer;
- (id)initWithCoverImageURL:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (BOOL)isPlaying;
- (void)appWillResignActive:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupImage;

@end
