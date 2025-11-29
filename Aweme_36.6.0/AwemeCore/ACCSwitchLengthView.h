@class NSString, UICollectionView, ACCRecordContainerMode, ACCSwitchLengthMaskContainerView, UIView, NSMutableArray;
@protocol ACCSwitchLengthViewDelegate;

@interface ACCSwitchLengthView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) long long modeIndex;
@property (retain, nonatomic) UIView *collectionContainerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCSwitchLengthMaskContainerView *bgMaskView;
@property (retain, nonatomic) NSString *segmentShootTitle;
@property (nonatomic) BOOL enableDynamicCellWidth;
@property (nonatomic) BOOL hasUpdated;
@property (nonatomic) struct CGSize { double width; double height; } defaultCellSize;
@property (nonatomic) double previewWidth;
@property (retain, nonatomic) NSMutableArray *widthArray;
@property (retain, nonatomic) NSMutableArray *contentOffsetArray;
@property (retain, nonatomic) NSMutableArray *midOffsetArray;
@property (weak, nonatomic) id<ACCSwitchLengthViewDelegate> delegate;
@property (weak, nonatomic) ACCRecordContainerMode *containerMode;
@property (nonatomic) BOOL needForceSwitch;
@property (nonatomic, getter=isPanned) BOOL panned;
@property (copy, nonatomic) id /* block */ scrollDidScrollUpdateCinemaProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)cellWidthForTitle:(id)a0;
- (id)maskContainerView;
- (void)setModeIndex:(long long)a0 animated:(BOOL)a1;
- (void)changeModeIndexTo:(long long)a0 withMethod:(long long)a1;
- (void)accessibilityChangeMode:(long long)a0;
- (double)backgroundViewStartY;
- (void)updateUIWithSelectedIndex:(long long)a0;
- (void)updateWithPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isTitleTooLong:(id)a0;
- (void)adjustToPreview;
- (long long)p_currentSelectedModeId;
- (double)processForXOffset:(long long)a0 inCellIndex:(long long)a1;
- (void)handleScrollViewDidScrollWhenDynamicEnabled:(id)a0;
- (void)p_updateCellStatus;
- (void)updateEnableDynamicCellWidthWith:(id)a0;
- (void)configCellWidthAndOffsetArray;
- (long long)centerCellIndexForScrollXOffset:(long long)a0;
- (long long)cellWidthForContentIndex:(long long)a0;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)extraWidth;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (long long)cellWidth;
- (void)setupUI;
- (long long)cellCount;

@end
