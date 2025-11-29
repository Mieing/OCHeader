@class AWEAwemeModel, NSString, AWEListDataController, AWEUILoadingView, NSDictionary, AWEMixVideoModel, AWEMixVideoNewPanelViewController, NSNumber;
@protocol AWEMixSelectChaptersListDelegate, AWEMixVideoDetailPlayListDataControllerProtocol;

@interface AWEMixVideoSelectChaptersController : UIViewController <AWEMixVideoPanelViewDelegate, AWEMixFeedSelectChaptersViewControllerProtocol>

@property (retain, nonatomic) AWEMixVideoNewPanelViewController *mixPanelVC;
@property (nonatomic) BOOL forceFirstPosition;
@property (retain, nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> *subDataController;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) NSNumber *positionEpisode;
@property (nonatomic) BOOL firstRequestFinished;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEAwemeModel *initialModel;
@property (nonatomic) BOOL isCalledMixPanelListWillClose;
@property (copy, nonatomic) id /* block */ selectMixVideoBlock;
@property (nonatomic) BOOL shouldReturnAfterSelectMixVideoBlock;
@property (weak, nonatomic) id<AWEMixSelectChaptersListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mixDataControllerWithModel:(id)a0;

- (void)dismissPanelWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 logExtraDict:(id)a3;
- (double)getMixPanelHeight;
- (void)mixVideoListMoveGetProgress:(double)a0;
- (void)willDismissPanelWithAnimated:(BOOL)a0;
- (void)cancelClosePanelShrinkVideo;
- (void)showH5WithUrl:(id)a0 mixName:(id)a1;
- (void)mixVideoDidTappedIndex:(long long)a0 aweme:(id)a1;
- (void)syncFromDataController:(id)a0;
- (BOOL)needLocatedAlignment;
- (void)requestMixInfo;
- (void)initMixDetailPlay;
- (void)trackSelectWithAweme:(id)a0;
- (BOOL)fixSwitchEnabledLayout;
- (BOOL)needSynchronizeData;
- (void)syncDataControllerForAwemeModel:(id)a0;
- (BOOL)shouldDismissWithAnimated;
- (void)trackResultClickWithAweme:(id)a0;
- (id)initWithModel:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (id)currentModel;
- (void)refreshData;
- (void)initData;

@end
