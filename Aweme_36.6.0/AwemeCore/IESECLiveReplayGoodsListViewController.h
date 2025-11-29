@class IESECLiveReplayGoodsListViewModel, IESECLiveReplayGoodsListContext, IGListAdapter, NSString, IESECLiveReplayGoodsListViewHolder;

@interface IESECLiveReplayGoodsListViewController : UIViewController <IGListAdapterDataSource, IESECLiveListReloadProtocol, IGListAdapterDelegate>

@property (retain, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESECLiveReplayGoodsListViewModel *goodsListViewModel;
@property (retain, nonatomic) IESECLiveReplayGoodsListViewHolder *viewHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplayObject:(id)a1 atIndex:(long long)a2;
- (void)listAdapter:(id)a0 didEndDisplayingObject:(id)a1 atIndex:(long long)a2;
- (void)performUpdatesAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 goodsListViewModel:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadData;
- (void)setupUI;
- (void)reloadDataWithCompletion:(id /* block */)a0;

@end
