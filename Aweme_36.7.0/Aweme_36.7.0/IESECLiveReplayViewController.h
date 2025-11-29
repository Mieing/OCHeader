@class UIView, IESECButton, NSArray, IESECLiveReplayGoodsListContainerViewController, NSString, IESECLiveReplayBackgroundComponentView, IESECLiveReplayDataStore, IESECLiveReplayInteractionView, IESECNavigationBar, IESECLiveReplayPlayerComponentView, IESECLiveReplayNavigationBarView, IESECQualityInfoV2;

@interface IESECLiveReplayViewController : UIViewController <IESLiveVideoPlayerControllerDelegate, IESECLiveReplayDataStoreOwner>

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *statusView;
@property (retain, nonatomic) IESECNavigationBar *customNavigationBar;
@property (retain, nonatomic) IESECLiveReplayNavigationBarView *navigationBarNewStyle;
@property (retain, nonatomic) IESECButton *customNavigationBackButton;
@property (retain, nonatomic) IESECLiveReplayBackgroundComponentView *backgroundComponentView;
@property (retain, nonatomic) IESECLiveReplayPlayerComponentView *playComponentView;
@property (retain, nonatomic) IESECLiveReplayInteractionView *interactionView;
@property (copy, nonatomic) NSArray *componentViews;
@property (retain, nonatomic) UIView *jumpLiveRoomIndicatorBar;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (retain, nonatomic) IESECLiveReplayGoodsListContainerViewController *replayGoodsListContainerVC;
@property (nonatomic) long long reloadTimes;
@property (copy, nonatomic) NSString *authorID;
@property (readonly, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoading;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (void)setAccessibility;
- (BOOL)ttHideNavigationBar;
- (id)appendReplayParams:(id)a0;
- (id)navbarBtmModel;
- (void)trackReplayEvent:(id)a0 params:(id)a1 btmModel:(id)a2;
- (void)dismissReplayVC:(id)a0;
- (void)fetchDataWithParams:(id)a0;
- (void)showFirstEntranceToast;
- (void)addNotificationOnViewDidLoad;
- (void)playerDidFinishPlay:(id)a0;
- (void)trackReplayProductEntranceClicked;
- (BOOL)enableBugfixEdgeBackLiveAudioIssue;
- (void)muteLiveRoomIfNeeded;
- (id)pageBtmModel;
- (id)jumpLiveBtmModel;
- (void)addJumpLiveRoomIndicatorBar;
- (void)jumpLiveRoomIndicatorBarDidClick;
- (void)trackReplayProductEntranceShow;
- (id)productCartBtmModel;
- (void)didClickedCartView:(id)a0;
- (void)navigationBackClick:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dataLoaded;
- (void)showLoading;

@end
