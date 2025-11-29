@class NSString, UICollectionView, NSMutableSet, UILabel, UIButton;
@protocol WCFinderProfilePlaylistCellDataSource;

@interface WCFinderProfilePlaylistCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *allButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableSet *registerCellSet;
@property (weak, nonatomic) id<WCFinderProfilePlaylistCellDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calcualteItemWidth:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeThatFit:(struct CGSize { double x0; double x1; })a0 showPlayInfo:(BOOL)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;

@end
