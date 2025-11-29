@class NSString, NSArray, UICollectionView, AWESearchFilterCollectionViewCell, UICollectionViewFlowLayout, AWESearchFilterCollectionViewColorConfiguration, AWEGuideSearchWordsExtraModel;
@protocol AWESearchFilterCollectionViewDelegate;

@interface AWESearchFilterCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (retain, nonatomic) AWESearchFilterCollectionViewCell *templateCell;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (copy, nonatomic) NSArray *words;
@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) AWEGuideSearchWordsExtraModel *guideSearchWordsExtra;
@property (nonatomic) BOOL threeLayoutSign;
@property (nonatomic) double curCollectionViewHeight;
@property (weak, nonatomic) id<AWESearchFilterCollectionViewDelegate> delegate;
@property (readonly, nonatomic) long long selectedIndex;
@property (nonatomic) double fontSize;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double minWidth;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemResius;
@property (retain, nonatomic) AWESearchFilterCollectionViewColorConfiguration *colorConfiguration;
@property (nonatomic) BOOL limitTextNum;
@property (nonatomic) BOOL isFromFilter;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL needBold;
@property (copy, nonatomic) id /* block */ rowOfCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)collectionViewHeight;

- (void)updateWithWords:(id)a0 selectedIndex:(long long)a1;
- (void)newSetupUI;
- (BOOL)enableTrendingWordsShowOpt;
- (BOOL)judgeValidWordsShowWithIndexPath:(id)a0;
- (unsigned long long)visibleGSWordsCnt;
- (void)updateWithWords:(id)a0 selectedIndex:(long long)a1 extraModel:(id)a2;
- (void)trendingWordsShowIfNeed;
- (void)trendingWordsShowIfNeedWithIndexPath:(id)a0;
- (void)updateWithModels:(id)a0 selectedIndex:(long long)a1;
- (double)getNewStyleHeight;
- (void)updateItemSize;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
