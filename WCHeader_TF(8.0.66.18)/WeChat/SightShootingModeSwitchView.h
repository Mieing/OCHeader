@class NSArray, UICollectionView, MMUIView, NSString;
@protocol SightShootingModeSwitchViewDelegate;

@interface SightShootingModeSwitchView : MMUIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMUIView *dotView;
@property (nonatomic) unsigned long long currentShootingMode;
@property (nonatomic) unsigned long long lastShootingMode;
@property (retain, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<SightShootingModeSwitchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewH;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)reloadData;
- (void)prepareToScroll;
- (void)setToTemplateShootingMode;
- (void)scrollToIndex:(unsigned long long)a0;
- (unsigned long long)getCurrentShootingMode;
- (unsigned long long)getLastShootingMode;
- (void)updateTitleStats;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (struct CGPoint { double x0; double x1; })nearestTargetOffsetForOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
