@class NSString, UICollectionView, IESECHorizonFlowLayout, UIView, IESECGoodsDetailHeaderTabComponentData;
@protocol IESECGoodsDetailHeaderTabViewDelegate;

@interface IESECGoodsDetailHeaderTabHorizonFlowView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESECHorizonFlowItemSizeDelegate, IESECGoodsDetailHeaderTabViewProtocol>

@property (retain, nonatomic) IESECGoodsDetailHeaderTabComponentData *data;
@property (nonatomic) unsigned long long totalIndex;
@property (nonatomic) unsigned long long nowTabIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECHorizonFlowLayout *layout;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIView *slideView;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;
@property (nonatomic) BOOL delayTextRefresh;
@property (nonatomic) unsigned long long lastTabIndex;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long nowIndex;

- (struct CGSize { double x0; double x1; })itemSizeAtIndex:(long long)a0;
- (id)initWithTabs:(id)a0 initIndex:(unsigned long long)a1;
- (unsigned long long)indexToTabIndex:(unsigned long long)a0;
- (void)configCollectionViewWidth;
- (void)setProperLocationIfNeeded;
- (void)configGradientLayerLeft:(BOOL)a0 Right:(BOOL)a1;
- (unsigned long long)indexToTabPageIndex:(unsigned long long)a0;
- (void)updateSlideViewPosition;
- (id)tabString:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
