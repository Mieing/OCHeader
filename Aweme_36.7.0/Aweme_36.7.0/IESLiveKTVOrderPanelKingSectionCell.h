@class IESLiveKTVOrderPanelKingSectionModel, NSString, UICollectionView;

@interface IESLiveKTVOrderPanelKingSectionCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, IESLiveKTVOrderPanelSectionCellProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveKTVOrderPanelKingSectionModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithModel:(id)a0;
- (void)trackKingClickWithType:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
