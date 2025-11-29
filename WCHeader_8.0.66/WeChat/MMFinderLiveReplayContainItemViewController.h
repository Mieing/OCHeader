@class MMFinderLiveContentVM, MMFinderLiveReplayTask, MMFinderLiveReplayViewController;

@interface MMFinderLiveReplayContainItemViewController : MMLivePivotItemViewController

@property (retain, nonatomic) MMFinderLiveContentVM *contentVM;
@property (retain, nonatomic) MMFinderLiveReplayTask *replayTask;
@property (retain, nonatomic) MMFinderLiveReplayViewController *replayController;
@property (nonatomic) BOOL isInPreview;
@property (nonatomic) BOOL isPreviewMuted;

- (id)initWithContentVM:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)updateSafeAreaInsets;
- (id)liveTask;
- (id)controller;
- (void)prepareLiveTask;
- (void)prepareController;
- (void)layoutController;
- (void)startPreview;
- (void)startPreviewMuted:(BOOL)a0 isInScroll:(BOOL)a1;
- (void)stopPreview;
- (void)startLive:(unsigned long long)a0;
- (void)endLive;
- (void)onLiveComplete;
- (void)checkAndResumeLive;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
