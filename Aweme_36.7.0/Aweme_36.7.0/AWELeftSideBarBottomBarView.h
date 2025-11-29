@class NSArray, UICollectionView, NSString, AWEGradientView;
@protocol AWELeftSideBarBottomBarViewDelegate;

@interface AWELeftSideBarBottomBarView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWELeftSideBarBaseCollectionViewCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (nonatomic) long long themeStyle;
@property (nonatomic) double horizontalPadding;
@property (retain, nonatomic) NSArray *bottomModuleModels;
@property (weak, nonatomic) id<AWELeftSideBarBottomBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftSideBarBaseBaseCollectionViewCellOnCreateView:(id)a0 itemModel:(id)a1;
- (void)configGradientViewWithThemeStyle:(long long)a0;
- (id)initWithThemeStyle:(long long)a0 withHorizontalPadding:(double)a1;
- (void)themeStyleDidChange:(long long)a0;
- (void)updateAndReloadWithBottomModuleModels:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
