@class NSString, UIImageView, NSTimer, UILabel, UIViewController;

@interface AWEIMCampaignLoadingViewController : UIViewController <AWEUGCampaignNoticeLoadingProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *loadingAnimationLabel;
@property (retain, nonatomic) UIViewController *webViewController;
@property (retain, nonatomic) UIImageView *lableImageView;
@property (weak, nonatomic) NSTimer *timer;
@property (weak, nonatomic) NSTimer *loadingTimer;
@property long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked;
- (void)presentViewControllerIfNeeded;
- (void)clearAndReset;
- (void)loadLabelAnimation;
- (void)loadWebViewWithAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
