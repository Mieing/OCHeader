@class NSString, IESLiveSoloKTVOrderPanelModel, UICollectionView, NSArray, UICollectionViewFlowLayout, IESLiveEmptyView, UIButton;

@interface IESLiveKTVOrderPanelRoomListCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveKTVOrderPanelListProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) UIButton *startKTVButton;
@property (retain, nonatomic) IESLiveSoloKTVOrderPanelModel *panelModel;
@property (copy, nonatomic) NSArray *roomList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithSectionModel:(id)a0 index:(long long)a1;
- (void)fetchRoomData;
- (void)didTapStartKTVButton;
- (void)reloadData;
- (void)scrollToTop;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
