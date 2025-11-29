@class NSString, UICollectionView, NSMutableArray, FinderShopShelfLabelClassifyInfo;
@protocol MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate;

@interface MMFinderLiveShopGoodsSectionHeaderClassifyView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) NSMutableArray *classifyInfos;
@property (retain, nonatomic) FinderShopShelfLabelClassifyInfo *selectedClassifyInfo;
@property (retain, nonatomic) UICollectionView *classifyCollectionView;
@property (weak, nonatomic) id<MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setClassifyInfos:(id)a0 selected:(id)a1;
- (void)select:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
