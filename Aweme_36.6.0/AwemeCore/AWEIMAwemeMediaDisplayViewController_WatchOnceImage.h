@class NSTimer, UILabel, AWEStoryProgressContainerView, AWEUILoadingView;

@interface AWEIMAwemeMediaDisplayViewController_WatchOnceImage : AWEIMAwemeMediaDisplayViewController_Image

@property (retain, nonatomic) AWEStoryProgressContainerView *progressContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double playedDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) double beginTime;
@property (nonatomic) BOOL isTextEditing;
@property (nonatomic) BOOL isWatchEnd;
@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)setAwemeModel:(id)a0;
- (BOOL)longPressModuleViewEnable;
- (void)p_addObserver;
- (id)imageResourceDownloadModel;
- (void)p_puase;
- (void)p_resume;
- (void)setupUIWith:(id)a0;
- (void)p_addPeriodicTimeObserver;
- (void)p_fillMessage:(id)a0 withContent:(id)a1;
- (void)p_configDownloadingStateLocalImage;
- (void)p_onDownloadImageSuccess;
- (void)p_handleKeyboardShowNoti:(id)a0;
- (void)p_handleKeyboardHideNoti:(id)a0;
- (void)p_updatePlayProgress:(double)a0 duration:(double)a1;
- (BOOL)photoShouldEnableTapCloseAndOtherOptimize;
- (void)p_dismissWatchOnceMediaDisplayer;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)p_applicationWillResignActive:(id)a0;
- (void)p_applicationDidBecomeActive:(id)a0;

@end
