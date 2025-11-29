@class MagicSclFrameSetView, NSString, MMUIButton, WAGameCircleProgressLoadingViewController;

@interface MagicGameLoadingViewController : WACustomLoadingViewController

@property (retain, nonatomic) WAGameCircleProgressLoadingViewController *circleProgressVC;
@property (retain, nonatomic) MagicSclFrameSetView *frameSetView;
@property (retain, nonatomic) MMUIButton *startToPlayBtn;
@property (retain, nonatomic) NSString *appId;

- (id)initWithContact:(id)a0 pkgConfig:(id)a1 extraData:(id)a2;
- (void)hideDefaultLoading;
- (void)requestFullScreen;
- (void)hideLoadingAll;
- (id)biz;
- (void)viewDidLoad;
- (void)initStartToPlayBtn;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)onAppPrepared;
- (void)onHalfScreenStart;
- (void)onHalfScreenDone;
- (void)onFullScreenStart;
- (void)onFullScreenDone;
- (void)onRotationDone;
- (void)onRotationStart;
- (void)dealloc;
- (void).cxx_destruct;

@end
