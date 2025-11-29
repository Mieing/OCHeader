@class NSArray, UICollectionView, NSMutableSet, NSString, RxCollectionViewDiffableDataSource;
@protocol AWEIMInputTextBarViewDelegate;

@interface AWEIMInputTextBarView : UIView <UICollectionViewDelegate>

@property (retain, nonatomic) RxCollectionViewDiffableDataSource *dataSource;
@property (copy, nonatomic) NSArray *itemViewModels;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) NSMutableSet *showedViewModels;
@property (weak, nonatomic) id<AWEIMInputTextBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_createDataSource;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_applySnapshotWithAnimatingDifferences:(BOOL)a0;
- (void)updateWithItemViewModels:(id)a0;
- (void)didChangeBackgroundImage:(BOOL)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
