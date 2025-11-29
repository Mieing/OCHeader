@class NSString, MMWebImageView, WCEditVideoPushPopTransition, UIButton;

@interface WCEmotionEditVideoViewController : WCEditVideoViewController

@property (retain, nonatomic) WCEditVideoPushPopTransition *customTransitionDelegate;
@property (retain, nonatomic) MMWebImageView *thumbWebImgView;
@property (retain, nonatomic) UIButton *cancelDonwloadBtn;
@property (retain, nonatomic) UIButton *fakeNextBtn;
@property (retain, nonatomic) NSString *thumbImgUrl;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL forbidRightGesture;

- (id)initWithThumbImgUrl:(id)a0;
- (void)updateWithVideoPath:(id)a0;
- (void)viewDidLoad;
- (void)showButtons;
- (void)bringBtnsToFront;
- (void)onTapCancel;
- (void)showEditVideoViewOn:(id)a0;
- (void)onClickEditVideoCancelButton;
- (double)getMaxDuration;
- (double)getMinDuration;
- (void)setupTransitioningDelegate;
- (BOOL)shouldHideNavigationBar;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (struct CGSize { double x0; double x1; })getFallbackVideoSize;
- (void).cxx_destruct;

@end
