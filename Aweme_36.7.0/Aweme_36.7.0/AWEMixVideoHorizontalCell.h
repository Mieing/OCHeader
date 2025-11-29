@class UIView, NSString, NSArray, AWEMixVideoSmallCardMoreCell, AWEMixVideoModel, AWEMixVideoHorizontalCellHeader, UICollectionView, NSNumber;
@protocol AWEMixVideoHorizontalCellDelegate;

@interface AWEMixVideoHorizontalCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEMixVideoHorizontalCellHeader *header;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEMixVideoSmallCardMoreCell *footer;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) NSArray *awemeModelList;
@property (retain, nonatomic) NSNumber *themeStyle;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLastScreenScrolling;
@property (nonatomic) BOOL isNeedDealMoreCellClick;
@property (weak, nonatomic) id<AWEMixVideoHorizontalCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGPoint { double x0; double x1; })defaultContenOffset;
+ (double)cellHeight;

- (void)configWithMixVideoModel:(id)a0 awemeModelList:(id)a1 currentMixVideoModel:(id)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3;
- (void)scrollToContentOffsetIfNeeds:(struct CGPoint { double x0; double x1; })a0;
- (void)dealMoreCellClick;
- (struct CGPoint { double x0; double x1; })safeContentOffsetFor:(id)a0 withOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)accessibilityElements;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)contentWidth;
- (void)scrollViewDidScroll:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;
- (struct CGPoint { double x0; double x1; })currentContentOffset;

@end
