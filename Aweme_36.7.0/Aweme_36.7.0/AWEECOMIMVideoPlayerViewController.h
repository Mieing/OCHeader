@class UIView, NSString, TTVideoEngine, AWEECOMIMVideoItemModel, AWEECOMIMVideoComponent, UIImageView, UIButton, AWEUILoadingView, UIPanGestureRecognizer, AWEECOMIMVideoBottomSliderView, UILabel;

@interface AWEECOMIMVideoPlayerViewController : UIViewController <TTVideoEngineDataSource, TTVideoEngineDelegate, AWEECOMIMVideoBottomSliderViewDelegate>

@property (retain, nonatomic) TTVideoEngine *engine;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEECOMIMVideoItemModel *videoItem;
@property (copy, nonatomic) NSString *apiStr;
@property (retain, nonatomic) AWEECOMIMVideoBottomSliderView *sliderView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIButton *controlBtn;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *timeDurLabel;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL hasPlayed;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIButton *downloadBtn;
@property (retain, nonatomic) AWEECOMIMVideoComponent *videoComponent;
@property (copy, nonatomic) id /* block */ onClickSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEngineReadyToDisPlay:(id)a0;
- (void)videoEngineReadyToPlay:(id)a0;
- (id)apiForFetcher:(unsigned long long)a0;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)a0;
- (void)bindVideoItem:(id)a0;
- (id)ecomim_formatedTimeStrOfPlayTimeInterval:(double)a0;
- (void)sliderWatchedProgressWillChange:(id)a0;
- (void)sliderWatchedProgressChanging:(id)a0;
- (void)sliderWatchedProgressChanged:(id)a0;
- (void)registerListeners;
- (void)handleVideoPlayerTimeObservation;
- (void)playButtonClick;
- (void)colseButtonClick;
- (void)downloadButtonClick;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
