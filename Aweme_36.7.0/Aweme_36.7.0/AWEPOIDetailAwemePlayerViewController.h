@class NSString, UIImageView, NSDictionary, UIView, UIButton;
@protocol AWEAwemePlayVideoControllerProtocol, IESVideoPlayerProtocol, AWEPOIFeedPlayVideoViewControllerProtocol;

@interface AWEPOIDetailAwemePlayerViewController : UIViewController <IESVideoPlayerDelegate>

@property (retain, nonatomic) id<AWEAwemePlayVideoControllerProtocol, AWEPOIFeedPlayVideoViewControllerProtocol> videoController;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView *tapView;
@property (nonatomic) long long playState;
@property (nonatomic) BOOL readyToPlay;
@property (nonatomic) BOOL needUpdatePlayer;
@property (nonatomic) long long stallState;
@property (retain, nonatomic) UIImageView *placeholderForAwemePlayer;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL hideActionButton;
@property (copy, nonatomic) id /* block */ didEndStall;
@property (copy, nonatomic) id /* block */ didTapActionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)updatePlayerIfNeeded;
- (id)currentAweme;
- (void)playLoadingAnimation;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)configWithAweme:(id)a0;
- (void)configWithAweme:(id)a0 enableAlbum:(BOOL)a1;
- (id)videoControllerView;
- (void)switchVideoStatusByClick;
- (void)p_setupUI;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)accessibilityElements;
- (id)player;
- (void)reset;
- (id)playerView;
- (void)didResignActive;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)stopLoadingAnimation;

@end
