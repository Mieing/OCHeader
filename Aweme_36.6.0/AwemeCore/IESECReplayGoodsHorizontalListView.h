@class IESECLiveReplayDataStore, NSString, IESECPlaybackGoodsCardListView;
@protocol IESECReplayGoodsHorizontalListViewDelegate;

@interface IESECReplayGoodsHorizontalListView : UIView <IESECLiveReplayComponentViewProtocol, IESECPlaybackGoodsCardListViewDelegate>

@property (retain, nonatomic) IESECPlaybackGoodsCardListView *listView;
@property (weak, nonatomic) id<IESECReplayGoodsHorizontalListViewDelegate> delegate;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataSource;
- (void)dataStoreChanged;
- (BOOL)isFromGoodsDetail;
- (BOOL)currentVideoHasSubtitleInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataStore:(id)a1 delegate:(id)a2;
- (void)showViewInParent:(id)a0;
- (void)listView:(id)a0 reqeustNextPageWithCompletion:(id /* block */)a1;
- (void)shrinkButtonClickToHideCollectionView:(BOOL)a0;
- (void)listView:(id)a0 changeCardWithModel:(id)a1 localIndex:(long long)a2;
- (BOOL)shouldUseMultiCard;
- (id)currentFetchPromotionIDList:(long long)a0;
- (void)dataStoreChangedWhenRequestMore;
- (void).cxx_destruct;
- (void)goBack;
- (void)setupUI;

@end
