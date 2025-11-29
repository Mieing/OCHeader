@class UIFont, NSArray, UICollectionView, UIColor, UILabel, NSString;
@protocol CAKSearchSugesstionTagListViewDelegate;

@interface CAKSearchSugesstionTagListView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *calculatedSizeLabel;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL needsScrollToSelectedIndex;
@property (copy, nonatomic) NSArray *tags;
@property (weak, nonatomic) id<CAKSearchSugesstionTagListViewDelegate> delegate;
@property (nonatomic) BOOL useCircleCorner;
@property (nonatomic) double tagSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UIFont *tagFont;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) UIColor *tagBackgroundColor;
@property (nonatomic) double tagCornerRadius;
@property (retain, nonatomic) UIFont *selectedTagFont;
@property (retain, nonatomic) UIColor *selectedTagTextColor;
@property (retain, nonatomic) UIColor *selectedTagBackgroundColor;
@property (nonatomic) double selectedTagCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToSelectedIndexIfNeeded;
- (void)setupDefaultValues;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupCollectionView;
- (void)setInitialSelectedIndex:(long long)a0;

@end
