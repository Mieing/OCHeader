@class NSString, UICollectionView;
@protocol WCFinderHorizontalSlideViewDelegate;

@interface WCFinderHorizontalSlideView : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) double itemSpace;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (weak, nonatomic) id<WCFinderHorizontalSlideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)registerViewClass:(Class)a0 identifier:(id)a1;
- (void)refreshView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
