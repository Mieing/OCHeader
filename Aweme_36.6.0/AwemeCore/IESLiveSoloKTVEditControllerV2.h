@class NSString, IESLiveSoloKTVMVListView, IESLiveSoloKTVEditPanelView, IESLiveSoloKTVTemplateSwitchView, IESLiveSoloKTVEditFirstGuideView, IESLiveSoloKTVPieceTitleView, IESLiveSoloKTVEditModelV2, IESLiveSoloKTVEditSegmentView, IESLiveSoloKTVPlayer;

@interface IESLiveSoloKTVEditControllerV2 : UIViewController <IESLiveSoloKTVPlayerDelegate>

@property (retain, nonatomic) IESLiveSoloKTVEditModelV2 *model;
@property (retain, nonatomic) IESLiveSoloKTVPieceTitleView *titleView;
@property (retain, nonatomic) IESLiveSoloKTVEditSegmentView *segmentView;
@property (retain, nonatomic) IESLiveSoloKTVTemplateSwitchView *templateView;
@property (retain, nonatomic) IESLiveSoloKTVMVListView *mvListView;
@property (retain, nonatomic) IESLiveSoloKTVMVListView *videoListView;
@property (retain, nonatomic) IESLiveSoloKTVEditPanelView *tuningView;
@property (retain, nonatomic) IESLiveSoloKTVPlayer *blackPlayer;
@property (retain, nonatomic) IESLiveSoloKTVEditFirstGuideView *firstGuideView;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) BOOL isFromViewWillDisappear;
@property (nonatomic) long long scaleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)baseInfo;
- (void)initView;
- (void)didPlayerPlayFinish;
- (id)soloKTVEnterService;
- (void)addFirstGuideViewIfNeed;
- (void)generateAllPlayerItem:(id)a0;
- (void)updateListView:(BOOL)a0 error:(id)a1;
- (void)trackPreviewPageShow;
- (void)trackEditPageButtonClickWithType:(id)a0;
- (void)trackEditPageDuration:(id)a0;
- (void)trackReturnClick;
- (void)openPreviewVC;
- (void)trackEditPanel:(BOOL)a0;
- (void)onClickListViewItem:(BOOL)a0 index:(int)a1;
- (void)openAlbumVC;
- (void)onRefreshOrLoadMoreItem:(BOOL)a0 isMV:(BOOL)a1;
- (void)trackAudioEffectClick;
- (void)removeFirstGuideView;
- (void)didPlayerStatusChange:(long long)a0;
- (void)didPlayerProgressChangeWithTime:(double)a0;
- (id)initWithEditModel:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)addObserver;
- (void)didBecomeActive:(id)a0;
- (void)willResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initData;

@end
