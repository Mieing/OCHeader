@class UIColor, NSArray, UICollectionView, VernierView, NSLayoutConstraint, UIView, NSString;
@protocol BDXTabbarViewDelegate, BDXTabbarViewEventDelegate;

@interface BDXTabbarView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) BOOL hasFirstTimeAutoSelected;
@property (retain, nonatomic) NSArray *tabbarItems;
@property (retain, nonatomic) VernierView *vernier;
@property (retain, nonatomic) UIView *bottomBorder;
@property (retain, nonatomic) NSLayoutConstraint *bottomBorderWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomBorderHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomBorderBottomConstraint;
@property (weak, nonatomic) id<BDXTabbarViewEventDelegate> lynxEventDelegate;
@property (weak, nonatomic) id<BDXTabbarViewDelegate> delegate;
@property (retain, nonatomic) UIColor *tabIndicatorColor;
@property (nonatomic) double tabInterSpace;
@property (nonatomic) double tabIndicatorWidth;
@property (nonatomic) double tabIndicatorHeight;
@property (nonatomic) double tabIndicatorTop;
@property (nonatomic) long long tabLayoutGravity;
@property (nonatomic) double borderHeight;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderDistanceToBottom;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tabsOffsetToCenter;
- (double)tabsOriginTotalWidth;
- (id)getCell:(unsigned long long)a0;
- (void)scrollToTargetIndex:(unsigned long long)a0 sourceIndex:(unsigned long long)a1 percent:(double)a2;
- (void)reselectSelectedIndex;
- (BOOL)directSetSelectedIndex:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
