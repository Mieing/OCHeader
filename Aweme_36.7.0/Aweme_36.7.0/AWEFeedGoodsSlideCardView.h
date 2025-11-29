@class NSArray, UICollectionView, NSString, UIButton;
@protocol AWEGoodsSlideCardViewDelegate;

@interface AWEFeedGoodsSlideCardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UICollectionView *slideCollectionView;
@property (retain, nonatomic) NSArray *goodsDataArray;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) BOOL isFirstCallWillDisplayCell;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<AWEGoodsSlideCardViewDelegate> delegate;
@property (nonatomic) long long currentPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick;
- (void)p_loadView;
- (void)trackShowWithIndex:(long long)a0;
- (void)remakeConstraintsForStyle;
- (void)updateCloseButtonStyle;
- (void)updateWithDataSource:(id)a0 targetPromotionID:(id)a1;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateStyle:(unsigned long long)a0;
- (id)cellIdentifier;
- (struct CGSize { double x0; double x1; })cardSize;

@end
