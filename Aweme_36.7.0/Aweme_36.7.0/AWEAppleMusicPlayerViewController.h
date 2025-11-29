@class NSTimer, MPMusicPlayerController, NSString, AWEMusicProgressSlider, AWEAppleMusicBackgroudScrollView, UIImageView, AWENavView, UIButton, AWEMusicModel, NSDictionary, UIProgressView, UILabel;

@interface AWEAppleMusicPlayerViewController : UIViewController <AWERouterViewControllerProtocol, AWEAppleMusicPlayProtocol>

@property (retain, nonatomic) AWENavView *navView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *startTimeLabel;
@property (retain, nonatomic) UILabel *endTimeLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) AWEMusicProgressSlider *slider;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) UILabel *albumLabel;
@property (retain, nonatomic) UIButton *addToPlaylistButton;
@property (retain, nonatomic) UILabel *addToPlaylistLabel;
@property (retain, nonatomic) UILabel *artistLabel;
@property (retain, nonatomic) AWEAppleMusicBackgroudScrollView *scrollView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) MPMusicPlayerController *playControl;
@property (nonatomic) long long loopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *productID;
@property (retain, nonatomic) AWEMusicModel *model;
@property (copy, nonatomic) NSDictionary *extra;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)playTapped:(id)a0;
- (void)addPlaylistTapped:(id)a0;
- (void)formatTime:(double)a0 duration:(double)a1;
- (void)sliderValueChanged:(id)a0;
- (void)updateTime;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)a0;

@end
