@class CAGradientLayer, CameraScanCombineGoodsListViewExpandLayout, UICollectionView, NSString, UIView, NSMutableArray, CameraScanCombineGoodsListViewLayout;
@protocol CameraScanCombineGoodsListViewDelegate;

@interface CameraScanCombineGoodsListView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CameraScanCombineGoodsListViewLayoutDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *collectionContainerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *viewModels;
@property (retain, nonatomic) UIView *gradientMaskView;
@property (retain, nonatomic) NSMutableArray *viewModelsQueue;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isProcessingViewModel;
@property (retain, nonatomic) CameraScanCombineGoodsListViewLayout *normalLayout;
@property (retain, nonatomic) CameraScanCombineGoodsListViewExpandLayout *expandLayout;
@property (nonatomic) BOOL bChangingLayout;
@property (weak, nonatomic) id<CameraScanCombineGoodsListViewDelegate> delegate;
@property (nonatomic) BOOL isFold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)initData;
- (void)initSubviews;
- (void)initMaskViewWithHeight:(double)a0;
- (void)appendItemWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)appendNewItemWithViewModel:(id)a0;
- (BOOL)isListEmpty;
- (unsigned long long)listItemCardCount;
- (long long)indexOfCardWithItemViewModel:(id)a0;
- (void)clearListView;
- (id)itemsNeedRetrack;
- (void)updateItemToFailWithViewModel:(id)a0;
- (void)changeListViewToFold:(BOOL)a0 animated:(BOOL)a1;
- (void)listViewDidFold:(BOOL)a0;
- (void)__checkQueue;
- (void)__enqueueWithViewModel:(id)a0;
- (BOOL)shouldReplaceViewModel:(id)a0 withNewViewModel:(id)a1;
- (BOOL)isStringChanged:(id)a0 andNewString:(id)a1;
- (void)animateToInsertFirstCellWithViewModel:(id)a0;
- (BOOL)__checkExisitViewModelAndReplaceIfNeeded:(id)a0;
- (void)onCompleteAppendItemAnimationWithItemViewModel:(id)a0;
- (double)gradienLayerMaskHeight;
- (BOOL)shouldUseDefaultUpdateAnimation;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)onTapView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
