@class NSArray, UICollectionView, NSString, UIView, UIScrollView, UIButton;
@protocol AWEStickerPickerCategoryTabViewDelegate, AWEStickerPickerCategoryUIConfigurationProtocol;

@interface AWEStickerPickerCategoryTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *bottomBorderView;
@property (retain, nonatomic) UIButton *clearStickerApplyBtton;
@property (retain, nonatomic) UIView *sepratorLineView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *tabGradientBackView;
@property (retain, nonatomic) UIView *indicatorLine;
@property (copy, nonatomic) NSArray *categoryModels;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentViewContentOffset;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) id<AWEStickerPickerCategoryUIConfigurationProtocol> UIConfig;
@property (weak, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) long long defaultSelectedIndex;
@property (weak, nonatomic) id<AWEStickerPickerCategoryTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabScrollView;
- (void)selectItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (id)initWithUIConfig:(id)a0;
- (void)updateUIConfig;
- (void)scrollAndSelectItemAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)moveIndicatorFromIndex:(long long)a0 toIndex:(long long)a1 progress:(double)a2;
- (void)selectIndex:(long long)a0 animated:(BOOL)a1;
- (void)selectTabAndNotify:(id)a0 animated:(BOOL)a1;
- (void)contentOffsetOfContentScrollViewDidChange:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForIndex:(long long)a0;
- (void)executeTwinkleAnimationForIndexPath:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupSubviews;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void)updateCategory:(id)a0;

@end
