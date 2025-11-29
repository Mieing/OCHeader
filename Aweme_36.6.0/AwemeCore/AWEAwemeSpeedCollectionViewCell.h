@class NSArray, UIImageView, UICollectionView, NSString;

@interface AWEAwemeSpeedCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *speedModels;
@property (retain, nonatomic) UICollectionView *speedCollectionView;
@property (retain, nonatomic) UIImageView *polygonImageView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configWithModel:(id)a0;
- (void)updatePolygonImageView;
- (void)updateSelectedCell:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
