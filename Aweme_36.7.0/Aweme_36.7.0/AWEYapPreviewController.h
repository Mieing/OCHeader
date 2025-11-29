@class AWEPayRPOpenRedPacketViewController, UIImageView, AWEIMDouyinRedPacketView, UILabel, AWEIMDouyinRedPacketCoverModel, AWEYAPRPDetailViewController;

@interface AWEYapPreviewController : UIViewController

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) AWEIMDouyinRedPacketView *rpCardView;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverModel;
@property (weak, nonatomic) AWEPayRPOpenRedPacketViewController *openVC;
@property (weak, nonatomic) AWEYAPRPDetailViewController *detailVC;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)p_setupNavBar;
- (void)p_back;
- (void)p_trackEvent:(id)a0 param:(id)a1;
- (id)initWithCoverModel:(id)a0;
- (void)p_setupRpCardView;
- (void)p_tapRP;
- (void)p_presentOpenVc;
- (void)p_openDetail;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
