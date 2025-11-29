@class CAKAIMemoriesSearchInsightSection, NSString, UICollectionView, CAKAlbumInsightSection, UIView, DUXBaseLabel;
@protocol CAKAlbumInsightSectionCellDelegate;

@interface CAKAlbumInsightSectionCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAKAlbumInsightSection *model;
@property (retain, nonatomic) CAKAIMemoriesSearchInsightSection *AIMemoriesModel;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) BOOL needsReload;
@property (weak, nonatomic) id<CAKAlbumInsightSectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0;
+ (double)heightForForAIMemoriesInsightItem;

- (void)configWithModel:(id)a0;
- (BOOL)enableAIMemoriesCategoryViewShakeFix;
- (void)configWithAIMemoriesSectionModel:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupViews;

@end
