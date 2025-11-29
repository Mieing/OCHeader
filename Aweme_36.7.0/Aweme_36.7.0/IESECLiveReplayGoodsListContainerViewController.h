@class IESECLiveReplayGoodsListHeaderViewController, NSString, IESECLiveReplayGoodsListViewController, IGListAdapter, IESECLiveReplayGoodsListContext, IESECLiveReplayGoodsListContainerViewModel, IESECLiveReplayGoodsListContainerViewHolder, UIViewController;

@interface IESECLiveReplayGoodsListContainerViewController : UIViewController <IESECLiveReplayGoodsListContainerViewHolderDelegate>

@property (retain, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IESECLiveReplayGoodsListContainerViewHolder *viewHolder;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (weak, nonatomic) UIViewController *showInViewController;
@property (retain, nonatomic) IESECLiveReplayGoodsListContainerViewModel *containerViewModel;
@property (retain, nonatomic) IESECLiveReplayGoodsListViewController *goodsListViewController;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderViewController *goodsListHeaderViewController;
@property (nonatomic) BOOL didSendShowTrack;
@property (nonatomic) BOOL isReEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)configBtmTracker;
- (void)sendShowTrack;
- (void)configBtmTrackerV2WithSourceBtmToken:(id)a0;
- (void)updateHasMoreState;
- (void)configGoodsListHeaderView;
- (void)configGoodsListView;
- (void)didUserTapRefresh;
- (void)didUserTapBackground;
- (void)didPanToDismiss;
- (void)showInViewController:(id)a0 animated:(BOOL)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)fetchData;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupUI;
- (void)removeFromParent;
- (void)cleanData;

@end
