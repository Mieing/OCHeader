@class UIView, AWESearchCachalotResultContext, AWESearchPOICitySelectionFilterCardModel, NSString, CAGradientLayer, UICollectionView, YYLabel, AWESearchPOICitySelectionFilterCardSizeInfoObject, NSIndexPath;
@protocol AWESearchPOICitySelectionFilterCardDelegate;

@interface AWESearchPOICitySelectionFilterCardView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWESearchCachalotCardViewProtocol>

@property (class, retain, nonatomic) AWESearchPOICitySelectionFilterCardSizeInfoObject *sizeInfoObject;

@property (weak, nonatomic) YYLabel *titleLabel;
@property (weak, nonatomic) UICollectionView *citySelectionHorizontalList;
@property (weak, nonatomic) UIView *gradientView;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) AWESearchPOICitySelectionFilterCardModel *model;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (weak, nonatomic) id<AWESearchPOICitySelectionFilterCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (double)titleLeftSpacing;
+ (double)titleRightSpacing;
+ (id)sizeInfoObject;
+ (double)citySelectionHorizontalListMinimumInteritemSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })citySelectionHorizontalListSectionInset;
+ (double)citySelectionHorizontalListLeftSpacing;
+ (double)citySelectionHorizontalListRightSpacing;
+ (double)titleHeightWithValue:(id)a0 width:(double)a1;
+ (double)titleTopSpacingWithModel:(id)a0;
+ (double)citySelectionHorizontalListHeightWithModel:(id)a0;
+ (double)citySelectionHorizontalListTopSpacing;
+ (double)bottomSpacingWithModel:(id)a0;
+ (void)setSizeInfoObject:(id)a0;
+ (id)backgroundColorWithModel:(id)a0;
+ (BOOL)gradientViewHiddenWithModel:(id)a0;
+ (id)gradientColorsArrayWithModel:(id)a0;
+ (id)trailLinkedTextColor;
+ (id)trailLinkedTextFont;
+ (id)titleFont;
+ (id)titleColor;

- (BOOL)addGradientViewIfNeed;
- (BOOL)callDelegateCanSelectLinkedCityMethodWithModel:(id)a0;
- (void)callDelegateDidSelectLinkedCityMethodWithModel:(id)a0;
- (BOOL)callDelegateCanCancelSelectCityMethodWithModel:(id)a0;
- (void)callDelegateDidCancelSelectCityMethodWithModel:(id)a0;
- (BOOL)callDelegateCanSelectCityMethodWithModel:(id)a0;
- (void)callDelegateDidSelectCityMethodWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
