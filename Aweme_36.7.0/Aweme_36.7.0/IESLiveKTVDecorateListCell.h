@class NSString, NSArray, IGListAdapter, IESLiveKTVDecorateListDataSource, UICollectionView, HTSEventContext, IESLiveCommonKTVOrderPanelModel;
@protocol IESLiveKTVDecorateService;

@interface IESLiveKTVDecorateListCell : UICollectionViewCell <UICollectionViewDelegate, IGListAdapterDataSource, IESLiveKTVDecorateCellDelegate, IESLiveKTVOrderPanelListProtocol>

@property (retain, nonatomic) NSArray *outerModels;
@property (retain, nonatomic) NSArray *outerSections;
@property (retain, nonatomic) IGListAdapter *outerAdapter;
@property (retain, nonatomic) IESLiveKTVDecorateListDataSource *dataSource;
@property (weak, nonatomic) id<IESLiveKTVDecorateService> viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)didTapFoldButton:(id)a0 completion:(id /* block */)a1;
- (void)didSelectTagItem:(long long)a0;
- (void)didSelectMidiItem:(long long)a0 completion:(id /* block */)a1;
- (void)didSelectDecorateTab;
- (void)p_reloadTagList:(id)a0 adapter:(id)a1 completion:(id /* block */)a2;
- (void)p_reloadMidiList:(id)a0 adapter:(id)a1 completion:(id /* block */)a2;
- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (void)p_setupUI;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)willDisplay;

@end
