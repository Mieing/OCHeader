@class NSString, UICollectionView, UIImage, UIView, NSMutableArray;
@protocol AWEIMInputActionBarDelegate;

@interface AWEIMInputActionBarBigCardEntryView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEIMInputActionBarProtocol>

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *entryItemsCollectionView;
@property (retain, nonatomic) UIImage *blurImage;
@property (nonatomic) BOOL shouldHideBlurView;
@property (nonatomic, getter=isFilled) BOOL filled;
@property (weak, nonatomic) id<AWEIMInputActionBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) UIView *blurContentView;

+ (double)cardHeightForIPad;
+ (double)cardWidth;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (BOOL)iPadAdapterEnabled;
- (void)refreshView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataArray:(id)a1;
- (double)__cardWidth;
- (void)p_refreshUIStyle;
- (void)refreshVisiableCellsBackground;
- (BOOL)__resetStyleAppearanceOfVisibleCell;
- (long long)itemsForRow;
- (long long)indexOfIndexPath:(id)a0;
- (void)configCell:(id)a0 item:(id)a1;
- (struct CGSize { double x0; double x1; })p_calculateItemSizeForItem:(id)a0;
- (void)replaceEntryItems:(id)a0 animated:(BOOL)a1;
- (void)reloadActionBar;
- (void)refreshVisiableCellsIfNeeded;
- (void)updateBlurViewWithCell:(id)a0;
- (void)p_setupUI;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (unsigned long long)uiStyle;
- (void)scrollViewDidScroll:(id)a0;

@end
