@class IESECLiveReplayGoodsListContext, IESECLiveReplayGoodsListViewModel, IESECLiveReplayGoodsListHeaderViewModel, IESECLiveReplayGoodsListDataProvider;

@interface IESECLiveReplayGoodsListContainerViewModel : NSObject

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IESECLiveReplayGoodsListDataProvider *dataProvider;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeaderViewModel *headerViewModel;
@property (retain, nonatomic) IESECLiveReplayGoodsListViewModel *goodsListViewModel;
@property (nonatomic) BOOL didFinishNetworkRequest;

- (void)tryLoadMore:(id /* block */)a0;
- (id)basicTrackParams;
- (id)appendReplayParams:(id)a0;
- (void)fetchGoodsListWithCompletion:(id /* block */)a0;
- (void)loadMoreGoodsListWithCompletion:(id /* block */)a0;
- (void)trackGoodsListShow:(id)a0;
- (void)formatHeaderViewModelWithModel:(id)a0;
- (void)formatGoodsListViewModelWithModel:(id)a0;
- (void)appendGoodsListViewModelWithModel:(id)a0;
- (void)updateGoodsModel:(id)a0 with:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithContext:(id)a0;
- (BOOL)hasMore;
- (void)cancelCurrentRequest;

@end
