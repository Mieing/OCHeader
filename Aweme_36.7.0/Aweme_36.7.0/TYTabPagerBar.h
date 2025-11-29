@class NSString, UICollectionView, UIView, TYTabPagerBarLayout;
@protocol TYTabPagerBarDelegate, TYTabPagerBarDataSource;

@interface TYTabPagerBar : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource> {
    struct { unsigned char transitionFromeCellAnimated : 1; unsigned char transitionFromeCellProgress : 1; unsigned char widthForItemAtIndex : 1; } _delegateFlags;
    TYTabPagerBarLayout *_layout;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long countOfItems;
@property (nonatomic) long long curIndex;
@property (nonatomic) BOOL isFirstLayout;
@property (nonatomic) BOOL didLayoutSubViews;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<TYTabPagerBarDataSource> dataSource;
@property (weak, nonatomic) id<TYTabPagerBarDelegate> delegate;
@property (retain, nonatomic) TYTabPagerBarLayout *layout;
@property (nonatomic) BOOL autoScrollItemToCenter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToItemFromIndex:(long long)a0 toIndex:(long long)a1 animate:(BOOL)a2;
- (void)scrollToItemFromIndex:(long long)a0 toIndex:(long long)a1 progress:(double)a2;
- (double)cellWidthForTitle:(id)a0;
- (void)scrollToItemAtIndex:(long long)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)addCollectionView;
- (id)cellForIndex:(long long)a0;
- (void)addFixAutoAdjustInsetScrollView;
- (void)addUnderLineView;
- (void)transitionFromIndex:(long long)a0 toIndex:(long long)a1 animated:(BOOL)a2;
- (void)transitionFromIndex:(long long)a0 toIndex:(long long)a1 progress:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameWithIndex:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)registerClass:(Class)a0 forCellWithReuseIdentifier:(id)a1;
- (void)registerNib:(id)a0 forCellWithReuseIdentifier:(id)a1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndex:(long long)a1;

@end
