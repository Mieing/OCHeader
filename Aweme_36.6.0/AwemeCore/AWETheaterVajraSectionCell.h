@class AWETheaterTracker, NSString, UICollectionView, AWETheaterSectionModel, UIViewController;

@interface AWETheaterVajraSectionCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWETheaterSectionModel *sectionModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double lastWidth;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (copy, nonatomic) id /* block */ willDisplayHandler;
@property (copy, nonatomic) id /* block */ vajraCellClickTrackBlock;
@property (weak, nonatomic) UIViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)harmoniousCountInOnLine;
- (double)getPadSpace;
- (void)configWithSectionModel:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
