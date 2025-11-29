@class PlaylistTab, IESLiveSoloKTVOrderPanelModel, IESLiveKTVOrderPanelViewModel, IESLiveKTVOrderPanelCollectionView;

@interface IESLiveKTVOrderPanelSubSingListCell : UICollectionViewCell <IESLiveKTVOrderPanelListProtocol>

@property (retain, nonatomic) IESLiveSoloKTVOrderPanelModel *panelModel;
@property (retain, nonatomic) IESLiveKTVOrderPanelCollectionView *collectionView;
@property (retain, nonatomic) PlaylistTab *fatherTab;
@property (retain, nonatomic) IESLiveKTVOrderPanelViewModel *viewModel;

- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (id)getPanelModelArray;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
