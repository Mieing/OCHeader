@class NSArray, UICollectionView, AWEAwemeModel, UILabel, UIView, NSString;

@interface AWEAdCommentFilterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWECommerceCollectionViewDelegateLeftAlignedLayout>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *filterList;
@property (nonatomic) double filterTopSpacing;
@property (nonatomic) BOOL needCornerRadius;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ filterShowBlock;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configViews;
- (id)initWithTopSpacing:(double)a0 needCornerRadius:(BOOL)a1;
- (void)configureWithFilterList:(id)a0 totalCount:(long long)a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;

@end
