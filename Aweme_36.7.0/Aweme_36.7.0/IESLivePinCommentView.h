@class IESLivePinCommentStore, IESLivePinCommentIndicator, NSTimer, UICollectionView, NSDictionary, NSMutableArray, NSString;

@interface IESLivePinCommentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IESLivePinCommentCellDelegate>

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLivePinCommentIndicator *pageIndicator;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (retain, nonatomic) NSMutableArray *mutableNodes;
@property (retain, nonatomic) NSDictionary *pinCellsMap;
@property (nonatomic) BOOL refreshDidSetOffset;
@property (copy, nonatomic) NSString *lastDisplayNodeId;
@property (nonatomic) long long lastDisplayNodeChecked;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ fastDeleteBlock;
@property (copy, nonatomic) id /* block */ displayOnceBlock;
@property (copy, nonatomic) id /* block */ displayBlock;
@property (copy, nonatomic) id /* block */ deleteAllBlock;
@property (retain, nonatomic) IESLivePinCommentStore *pinStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)automaticScroll;
- (void)adjustScrollView:(id)a0;
- (void)pinCommentCell:(id)a0 clickCancelWithNode:(id)a1;
- (id)initWithPinCellsMap:(id)a0 containerWidth:(double)a1;
- (long long)indexWithOffsetX:(double)a0;
- (void)checkIfNeedUpdateLayoutWithNode:(id)a0;
- (void)pageDidChangeToIndex:(long long)a0 autoChange:(BOOL)a1;
- (void)pasueTimer;
- (long long)realIndexWithIndex:(long long)a0;
- (void)longPressAction:(id)a0;
- (void)stopTimer;
- (void)dismiss;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)refresh;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)startTimer;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)resumeTimer;
- (void)reloadViews;
- (void)setupView;

@end
