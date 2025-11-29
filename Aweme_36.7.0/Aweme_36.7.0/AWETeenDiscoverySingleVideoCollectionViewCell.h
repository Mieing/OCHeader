@class AWETeenGeneralCardModel, AWETeenAlbumDataController, UICollectionView, NSString, UILabel, AWETeenDiscoverChannelContext;

@interface AWETeenDiscoverySingleVideoCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWETeenGeneralCardModel *model;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;
@property (nonatomic) long long index;
@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })videoCellSizeWitModel:(id)a0;
+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0 withConstraintWidth:(double)a1;

- (id)enterFrom;
- (void)configWithModel:(id)a0 context:(id)a1 index:(long long)a2;
- (id)trackParamsWithIndex:(long long)a0;
- (void)trackTeenVideoCardShowWithEvent:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
