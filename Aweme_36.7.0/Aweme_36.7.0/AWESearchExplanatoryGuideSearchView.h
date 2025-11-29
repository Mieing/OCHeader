@class NSDate, NSString, NSArray, UICollectionViewFlowLayout, NSDictionary, AWESearchExplanatoryGuideSearchFooterView, NSMutableArray, DUXBaseCollectionView;
@protocol AWESearchWordProtocol, AWESearchExplanatoryGuideSearchViewProtocol;

@interface AWESearchExplanatoryGuideSearchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) DUXBaseCollectionView *guideSearchCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) NSArray *guideSearchWordArray;
@property (retain, nonatomic) NSMutableArray *hasReportedWordArray;
@property (nonatomic) BOOL isFromEcommerce;
@property (retain, nonatomic) NSMutableArray *wordWidthArray;
@property (nonatomic) BOOL hasTab;
@property (nonatomic) BOOL isLastTab;
@property (nonatomic) struct _LayoutReference { BOOL hasTab; unsigned long long cardStyle; unsigned long long heightStyle; unsigned long long tabStyle; BOOL isExceedDoubleLine; BOOL isAllSingleLine; BOOL containsAttributeTag; BOOL isAveraged; } layoutReference;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL hasTriggered;
@property (retain, nonatomic) NSDate *lastTriggeredTime;
@property (retain, nonatomic) AWESearchExplanatoryGuideSearchFooterView *footer;
@property (weak, nonatomic) id<AWESearchWordProtocol> delegate;
@property (weak, nonatomic) id<AWESearchExplanatoryGuideSearchViewProtocol> guideSearchViewDelegate;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithGuideSearchArray:(id)a0;
+ (void)updateCollectionViewInsetsWithLayoutReference:(struct _LayoutReference { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a0;
+ (double)cellHeightWithArray:(id)a0 layoutReference:(struct _LayoutReference { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })a1;

- (void)trackCardShow;
- (void)configUI;
- (void)resetResults;
- (void)configWordWidthArray;
- (void)trackWordsShowWithItemIndexPath:(id)a0;
- (void)updateWithArray:(id)a0 isFromEcommerce:(BOOL)a1 isNewGuideSearchWordList:(BOOL)a2 gsInfo:(id)a3 widthArray:(id)a4;
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
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
