@class NSArray, NSDictionary, NSString, UICollectionViewFlowLayout, DUXBaseCollectionView, NSMutableArray;
@protocol AWESearchWordProtocol, AWESearchPromotionGuideSearchViewProtocol;

@interface AWESearchPromotionGuideSearchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) DUXBaseCollectionView *guideSearchCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) NSArray *guideSearchWordArray;
@property (retain, nonatomic) NSMutableArray *hasReportedWordArray;
@property (nonatomic) BOOL isFromEcommerce;
@property (nonatomic) double wordMaxWidth;
@property (nonatomic) double wordMinWidth;
@property (retain, nonatomic) NSMutableArray *wordWidthArray;
@property (nonatomic) BOOL hasTab;
@property (nonatomic) BOOL isLastTab;
@property (nonatomic) struct _LayoutCalculateResult { BOOL isExceedDoubleLine; BOOL containsAttributeTag; } layoutResult;
@property (readonly, nonatomic) BOOL containsAttributeTag;
@property (nonatomic) double cellHeight;
@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;
@property (weak, nonatomic) id<AWESearchPromotionGuideSearchViewProtocol> guideSearchViewDelegate;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithGuideSearchArray:(id)a0;
+ (double)cellHeightWithArray:(id)a0 layout:(struct _LayoutCalculateResult { BOOL x0; BOOL x1; })a1;
+ (double)cellHeightWithArray:(id)a0 isExceedDoubleLine:(BOOL)a1 containsAttributeTag:(BOOL)a2;

- (void)trackCardShow;
- (void)configUI;
- (void)resetResults;
- (void)configWordWidthArray;
- (void)trackWordsShowWithItemIndexPath:(id)a0;
- (void)updateWithArray:(id)a0 isFromEcommerce:(BOOL)a1 isNewGuideSearchWordList:(BOOL)a2 gsInfo:(id)a3 widthArray:(id)a4;
- (void)setLayoutWithExceedDoubleLine:(struct _LayoutCalculateResult { BOOL x0; BOOL x1; })a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
