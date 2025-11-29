@class UIImageView, UIButton, UILabel;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoRecommendController : UIViewController

@property (retain, nonatomic) UIImageView *recommendImageView;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;

- (void)playBtnDown;
- (void)playBtnUp;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;

@end
