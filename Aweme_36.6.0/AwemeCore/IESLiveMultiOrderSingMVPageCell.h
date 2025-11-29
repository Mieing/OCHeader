@class NSString, IGListAdapter, UICollectionView, IESLiveEmptyView, IESLiveMultiOrderSingMVPageCellModel;

@interface IESLiveMultiOrderSingMVPageCell : UICollectionViewCell <IGListAdapterDataSource>

@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveMultiOrderSingMVPageCellModel *model;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (copy, nonatomic) id /* block */ didSelectModelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)sectionControllerForObject:(id)a0;
- (id)listSectionController;
- (void)loadMoreDone:(BOOL)a0;
- (void)addLoadMoreBlock:(id /* block */)a0;
- (void)didSelectCellWithModel:(id)a0 index:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
