@class UIView, NSString, NSURL, HTSEventContext, IESLiveVideoPlayerController, UIImageView, IESLiveHighlightMarkPreviewSlider, UILabel;

@interface IESLiveHighlightMarkPreviewViewController : UIViewController <IESLiveVideoPlayerControllerDelegate>

@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (retain, nonatomic) UIView *operateContainer;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *pauseIcon;
@property (retain, nonatomic) UIImageView *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *playTimeLabel;
@property (retain, nonatomic) IESLiveHighlightMarkPreviewSlider *slider;
@property (nonatomic) double currentProgress;
@property (nonatomic) long long highlightID;
@property (copy, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitleText;
@property (copy, nonatomic) NSString *hashTag;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 updateProgress:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (id)playTimeFrom:(long long)a0;
- (void)setupPlayer:(id)a0;
- (id)initWithHighlightID:(long long)a0 videoURL:(id)a1 title:(id)a2 subTitle:(id)a3 hashTag:(id)a4 trackContext:(id)a5;
- (void)streamTouch;
- (void)trackPreviewPlay;
- (void)sliderValueChanged:(id)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end
