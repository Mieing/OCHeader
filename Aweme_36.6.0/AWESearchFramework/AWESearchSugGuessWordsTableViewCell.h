@class AWESearchSugRecommendWordsModel, UICollectionView, NSString, UIView;

@interface AWESearchSugGuessWordsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWESearchSugRecommendWordsModel *model;
@property (nonatomic) unsigned long long displayCount;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *separateView;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (copy, nonatomic) id /* block */ guessWordTapBlock;
@property (copy, nonatomic) id /* block */ guessWordDisplayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)displayCountForModel:(id)a0;
+ (unsigned long long)displayCountWhenSlideDisableForModel:(id)a0;
+ (BOOL)enableDisplayGuessWordsCellWithModel:(id)a0;
+ (id)identifier;
+ (double)cellHeight;

- (void)configureUI;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)configureWithModel:(id)a0;

@end
