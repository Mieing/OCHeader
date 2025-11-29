@class NSTimer, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, UIPageControl, GXEvent;

@interface GXSliderNode : GXBaseNode <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, GXFlowLayoutDelegate> {
    BOOL _hasInit;
    GXEvent *_scrollEvent;
    double _containerHeight;
    NSDictionary *_config;
    NSString *_expression;
}

@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *sizeValues;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableDictionary *subTemplateItems;
@property (weak, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (nonatomic) BOOL autoScroll;
@property (nonatomic) double interval;
@property (nonatomic) BOOL infiniteLoop;
@property (nonatomic) BOOL isShowPageControl;
@property (nonatomic) long long totalItems;
@property (nonatomic) long long itemWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) double itemSpacing;
@property (nonatomic) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(long long)a0;
- (void)bindData:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (BOOL)updateLayoutStyle:(id)a0;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (void)configureViewInfo:(id)a0;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (void)registerItemCell;
- (void)processListData:(id)a0;
- (void)setupItemIdentifier:(id)a0;
- (void)handleVisibleCells;
- (void)calculateItemSize:(id)a0;
- (id)identifierWithIndex:(long long)a0;
- (id)templateItemWithIdentifier:(id)a0;
- (void)parserItemType;
- (void)handleSlider;
- (void)handleScrollToIndex:(id)a0;
- (double)itemWidthForRule;
- (int)pageControlIndexWithCurrentCellIndex:(long long)a0;
- (void)positionPageControl:(id)a0;
- (void)automaticScroll;
- (void)configSlider:(id)a0;
- (long long)currentIndex;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)invalidateTimer;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupTimer;
- (void)onDisappear;
- (void)renderView:(id)a0;
- (void)onAppear;

@end
