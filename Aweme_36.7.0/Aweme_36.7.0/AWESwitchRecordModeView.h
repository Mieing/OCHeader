@class NSString, UICollectionView, AWESwitchRecordModeViewConfig, NSMutableArray, UIView;
@protocol ACCSwitchModeViewDataSource, ACCSwitchModeViewDelegate;

@interface AWESwitchRecordModeView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECenteredScrollFlowLayoutDelegate, AWESwitchRecordModeViewStudioProxy>

@property (retain, nonatomic) NSMutableArray *widthArray;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long willStopAtIndex;
@property (retain, nonatomic) NSMutableArray *contentOffsetArray;
@property (retain, nonatomic) AWESwitchRecordModeViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCSwitchModeViewDelegate> delegate;
@property (weak, nonatomic) id<ACCSwitchModeViewDataSource> dataSource;
@property (nonatomic, getter=isPanned) BOOL panned;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *cursorView;
@property (nonatomic) long long switchPosition;
@property (nonatomic) long long switchMethod;

- (void)onThemeChanged;
- (void)selectItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)scrollViewDidEndScroll:(id)a0;
- (void)p_updateSelectedIndex:(long long)a0;
- (void)collectionViewScrollStopAtIndex:(long long)a0;
- (void)updateTabConfigForModeId:(long long)a0;
- (void)swichToCreatAI;
- (long long)collectionViewCurrentSelectedIndex;
- (id)itemViewForModeId:(long long)a0;
- (void)updateCursorFrame;
- (void)_configureCellWidth;
- (void)p_configSelectItemIndex:(long long)a0 animated:(BOOL)a1;
- (BOOL)enableLightTheme;
- (void)refreshTabThemeWithSelectedIndex:(unsigned long long)a0;
- (void)addGradientMaskLayerWithPadding:(double)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
