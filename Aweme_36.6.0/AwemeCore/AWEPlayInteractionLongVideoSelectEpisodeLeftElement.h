@class AWEPlayInteractionLongVideoPlusSelectLeftElementViewModel, AWEPlayInteractionLongVideoSelectEpisodeLeftView, NSString;

@interface AWEPlayInteractionLongVideoSelectEpisodeLeftElement : AWEPlayInteractionLeftElement <AWELongVideoPlusSelectPanelDelegate>

@property (retain, nonatomic) AWEPlayInteractionLongVideoSelectEpisodeLeftView *selectEpisodeLeftView;
@property (retain, nonatomic) AWEPlayInteractionLongVideoPlusSelectLeftElementViewModel *viewModel;
@property (nonatomic) BOOL autoEnterCanceled;
@property (nonatomic) BOOL hasTrackForShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackSelectionButtonWithModel:(id)a0 show:(long long)a1;
+ (id)commonTrackerParams:(id)a0;
+ (Class)aAWEPlayInteractionLongVideoSelectEpisodeLeftElementAdapterClass;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (double)getCurrentPlayProgress;
- (id)currentPlayingAwemeModel;
- (void)selectPanelDidDismiss;
- (void)changeVideoWithModel:(id)a0;
- (void)selectPanelDidShow;
- (void)selectPanelDragOffset:(double)a0;
- (void)trackSelectionButtonClick;
- (void)seekVideoEnd:(id)a0;
- (void)updateButtonWithTimeLeft:(double)a0;
- (BOOL)shouldShowLongVideoSelectEpisodeLeftElement;
- (id)aAWEPlayInteractionLongVideoSelectEpisodeLeftElementAdapter;
- (double)selectEpisodeLeftViewHeight;
- (double)selectEpisodeLeftViewBottomOffset;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updateUI;

@end
