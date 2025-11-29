@class CAGradientLayer, NSArray, UICollectionView, NSString, UIView;
@protocol IESLiveMultiTabSelectionViewDelegate;

@interface IESLiveMultiTabSelectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic) BOOL ignoreProgressEvent;
@property (nonatomic) BOOL canScroll;
@property (nonatomic) double tabSelectionWidth;
@property (retain, nonatomic) UIView *slideWhiteView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *tabModels;
@property (nonatomic) double currentProgress;
@property (nonatomic) double indicatorPosition;
@property (nonatomic) double indicatorOriginPosition;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) double scrollOffset;
@property (weak, nonatomic) id<IESLiveMultiTabSelectionViewDelegate> delegate;
@property (retain, nonatomic) UIView *indicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRightMargin:(double)a0;
- (double)getCellWidth;
- (double)currentTabIndicatorPosition;
- (void)updateIndicatorToIndex:(id)a0 animated:(BOOL)a1;
- (void)updateScrollProgress:(double)a0;
- (id)initWithTabModel:(id)a0;
- (void)reloadWithTabModels:(id)a0 selectIndex:(long long)a1;
- (void)dispatchScrollToIndex;
- (void)updateTabWidth:(double)a0;
- (void)updateCellWithTabIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)flowLayout;
- (void)setupViews;

@end
