@class NSArray, NSString, UICollectionView;
@protocol AWEVideoCoverRecommendTextViewDelegate;

@interface AWEVideoCoverRecommendTextView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL singleLine;
@property (weak, nonatomic) id<AWEVideoCoverRecommendTextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textModels:(id)a1 singleLine:(BOOL)a2;
- (void)refreshTitleModels:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionViewLayout;

@end
