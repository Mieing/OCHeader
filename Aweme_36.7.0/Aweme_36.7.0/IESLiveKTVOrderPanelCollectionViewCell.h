@class IESLiveKTVOrderPanelViewCellCollection, IGListAdapter, IESLiveKTVOrderPanelViewModel, NSString;

@interface IESLiveKTVOrderPanelCollectionViewCell : UICollectionViewCell <IGListAdapterDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) IESLiveKTVOrderPanelViewModel *viewModel;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) IESLiveKTVOrderPanelViewCellCollection *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)sectionControllerForObject:(id)a0;
- (void)willDisPlay;
- (void)renderViewModel:(id)a0;
- (void)exitSearchMode;
- (void)p_setupUI;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
