@class NSString, UICollectionView, WCFinderVideoTemplateSelectBasicViewModel, UILabel, UIView, MJTemplateListParams;

@interface WCFinderTemplateSelectBasicViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *templateTitleLabel;
@property (retain, nonatomic) UILabel *templateDescLabel;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UILabel *noDataTipsLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) unsigned long long currentSelectIndex;
@property (nonatomic) unsigned long long enterTime;
@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) WCFinderVideoTemplateSelectBasicViewModel *viewModel;
@property (retain, nonatomic) MJTemplateListParams *params;
@property (nonatomic) int fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)setupVM;
- (void)dealloc;
- (BOOL)shouldFetchDataAfterViewDidLoad;
- (void)reloadView;
- (void)reloadData;
- (void)relayoutView;
- (void)setupGesture;
- (void)setupBasicUI;
- (BOOL)useTransparentNavibar;
- (id)getReportExtInfoWithTemplateId:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (void)onTimelineViewEnterForeground:(id)a0;
- (void)onTimelineViewEnterBackground:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onVideoSelectVMFetchDataSuccessful;
- (void)onClickCancel;
- (void)onClickDone;
- (void)onSwipe:(id)a0;
- (void)setupDisplayView;
- (void)playVideo;
- (void)pauseVideo;
- (id)createViewModel;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
