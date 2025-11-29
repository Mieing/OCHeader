@class UIView, NSString, AWEWebViewController;

@interface AWEH5TabViewController : UIViewController <AWEFeedTabItemViewControllerProtocol>

@property (retain, nonatomic) AWEWebViewController *webViewController;
@property (retain, nonatomic) UIView *topBarBackgroundView;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double slidingHeight;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (id)initWithUrl:(id)a0 referString:(id)a1;
- (void)setupWebViewWithUrl:(id)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)stop;
- (void)viewDidLoad;

@end
