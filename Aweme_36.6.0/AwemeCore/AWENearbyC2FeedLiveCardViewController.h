@class AWENearbyC2FeedLiveCardResouceContainerView, NSString, AWENearbyC2FeedLiveCardContainerView, AWEAwemeModel, UIView, NSTimer, AWENearbyPageContext;
@protocol AWENearbyC2FeedLiveCardContainerProtocol, AWENearbyC2FeedCellDelegate, AWELivePreviewStreamViewProtocol;

@interface AWENearbyC2FeedLiveCardViewController : UIViewController <AWELivePreviewStreamViewDelegate, AWENearbyC2ContainerFeedCellControllerProtocol, AWENearbyC2ChildTrackerProtocol>

@property (weak, nonatomic) UIView<AWENearbyC2FeedLiveCardContainerProtocol> *containerView;
@property (retain, nonatomic) AWENearbyC2FeedLiveCardContainerView *cardContainerView;
@property (retain, nonatomic) AWENearbyC2FeedLiveCardResouceContainerView *resourceCardContainerView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView<AWELivePreviewStreamViewProtocol> *playerView;
@property (nonatomic) BOOL alreadyEnterLive;
@property (nonatomic) double liveStartTime;
@property (retain, nonatomic) NSTimer *playTimer;
@property (nonatomic) double displayTime;
@property (nonatomic) BOOL useNewLiveCardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isPlaying;
@property (weak, nonatomic) id<AWENearbyC2FeedCellDelegate> delegate;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;

+ (double)cellHeightWithWidth:(double)a0 model:(id)a1;

- (void)didDisplay;
- (void)previewStreamViewStartPlay:(id)a0;
- (void)previewStreamViewPlayFinished:(id)a0;
- (void)trackPreviewPlayError;
- (void)updateCoverImage;
- (id)liveModuleService;
- (void)stopLivePlayer;
- (id)initWithPageContext:(id)a0;
- (void)playWithMute:(BOOL)a0;
- (void)endDisplay;
- (void)onClickWithModel:(id)a0;
- (void)cellDidClickWithTapGestureRecognizer:(id)a0;
- (void)updateContentWithAweme:(id)a0 cellWidth:(double)a1;
- (id)setUpVCWithModel:(id)a0 cellWidth:(double)a1;
- (void)resetVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverFrame;
- (id)liveIconImg;
- (id)urlForLiveIconFromCDN;
- (void)trackEvent:(id)a0 url:(id)a1 loadTime:(long long)a2;
- (id)getCoverImageWithAweme:(id)a0;
- (void)trackCoverDidShow:(id)a0;
- (void)trackFreshImageShowtime:(id)a0;
- (void)resetVideoPlayerVC;
- (void)configDefaultData;
- (void)enterLiveRoomWithModel:(id)a0;
- (id)getMultiTabTrackParams;
- (id)appendLifeExtraParamsWithUrl:(id)a0;
- (id)getSchemaAppendTrackParamsWithLiveSchema:(id)a0 model:(id)a1;
- (id)fixInnerShowParamsWithSceneType:(unsigned long long)a0;
- (id)adInfoDicWithModel:(id)a0;
- (id)businiessParamsWithModel:(id)a0;
- (id)createLivePreviewStreamView;
- (void)trackPreviewPlayStart;
- (id)livesdkLiveShowParamsWithSceneType:(unsigned long long)a0;
- (void)resetPlay;
- (void)trackInnerDidShow:(id)a0;
- (void)getLivePlayTime;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (BOOL)canPlay;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplay;
- (void)updateInfo;

@end
