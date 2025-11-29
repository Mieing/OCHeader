@class NSString, AWEProgressChapterController, AWEGradientView, UIView, NSMutableArray;

@interface AFDPureModePagePaginatedProgressController : AWEBaseController <AFDPureModePageControllerProtocol, AFDRichContentProgressControllerDelegate>

@property (retain, nonatomic) UIView *paginatedProgressView;
@property (retain, nonatomic) AWEGradientView *backgroundMaskView;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isMultiView;
@property (nonatomic) double progressMargin;
@property (retain, nonatomic) AWEProgressChapterController *chapterController;
@property (retain, nonatomic) UIView *chapterLoopProgressView;
@property (retain, nonatomic) UIView *chapterLoopProgressBackgroundView;
@property (retain, nonatomic) NSMutableArray *chapterPointViews;
@property (copy, nonatomic) id /* block */ paginatedProgressBarClickedEventBlock;
@property (copy, nonatomic) id /* block */ paginatedProgressBarDidSelectedItemEventBlock;
@property (copy, nonatomic) id /* block */ downloadPageDidSelectAlbumPreviewItemEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAFDPureModePageViewControllerAdapterClass;
+ (Class)aAWEPadPureModeAdapterClass;
+ (BOOL)progressExpandConfig;

- (void)richContainerDidCreateProgressView:(id)a0;
- (BOOL)shouldRecognizeProgressGesture;
- (BOOL)shouldRecognizeWindowGesture;
- (void)didUpdatePaginatedProgressWithIndex:(long long)a0 totalCount:(long long)a1;
- (id)progressConfig;
- (BOOL)canPlayerPlayAfterTouch;
- (void)didUpdatePaginatedProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)previewInteractionDidStart;
- (void)containerStartPlaying;
- (void)setHotZoneManager:(id)a0;
- (BOOL)shouldExpandPinchProgressHotZone;
- (BOOL)shouldAlignFeedProgressHotZone;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)isPaidMixScreenRecording;
- (id)aAFDPureModePageViewControllerAdapter;
- (id)aAWEPadPureModeAdapter;
- (long long)progressViewTypeOptWithAB;
- (double)p_progressContainerH;
- (BOOL)enablePinchProgressDown;
- (BOOL)isChapterStyle;
- (BOOL)hasVideoAbstract;
- (BOOL)isHighLightStyle;
- (void)setChapterInfo;
- (void)setupChapterUI;
- (void)chapterLoopStatusChanged;
- (void)updateChapterPointViewLayout;
- (void)setupChapterLoopProgressView;
- (BOOL)avoidSearchVideoSectionWithScene:(id)a0;
- (unsigned long long)sentenceStyle;
- (void)updateProgressColorWhenChapterLoopChanged;
- (void)removeChapterLoopProgressView;
- (double)chapterOffsetWithProgress:(double)a0 totalValue:(double)a1;
- (void)updateChapterPointWithPlayTime:(double)a0;
- (BOOL)isChapterLoop;
- (BOOL)progressContainerIsVisiable;
- (BOOL)enablePinchProgressVisible;
- (BOOL)enableAddGestureControl;
- (BOOL)progressShowOptBlackList;
- (void)viewDidAppear;
- (void)becomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)setupContext;
- (void)addObservers;
- (void)previewInteractionDidEnd;
- (void)viewWillDisappear;

@end
