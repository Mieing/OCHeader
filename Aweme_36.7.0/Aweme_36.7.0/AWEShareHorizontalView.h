@class NSArray, UICollectionView, NSMutableSet, UICollectionViewFlowLayout, NSString;

@interface AWEShareHorizontalView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *viewModels;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSMutableSet *itemSets;
@property (copy, nonatomic) id /* block */ viewDidScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithViewModels:(id)a0;
- (void)updateWithViewModels:(id)a0 reloadData:(BOOL)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
