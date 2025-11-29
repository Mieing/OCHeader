@class IESECLiveReplayGoodsListContext, NSString, IESECLiveReplayGoodsListHeaderViewModel, IESECLiveReplayGoodsListHeaderViewHolder;

@interface IESECLiveReplayGoodsListHeaderViewController : UIViewController <IESECLiveReplayGoodsListEntriesViewDelegate>

@property (retain, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderViewHolder *viewHolder;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderViewModel *goodsListHeaderViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendShowTrack;
- (void)didShowEntryViewsWithItemModels:(id)a0;
- (void)didClickEntryView:(id)a0;
- (id)initWithContext:(id)a0 goodsListViewModel:(id)a1;
- (void)didClickedShopEntrance;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)loadData;
- (void)setupUI;

@end
