@class UIStackView, UIFont, UIView, UICollectionViewFlowLayout, NSString, NSMutableArray, UICollectionView, UIColor;
@protocol MJPageViewV2DataSource, MJPageViewV2Delegate;

@interface MJPageViewV2 : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (nonatomic) BOOL doneFirstLayout;
@property (nonatomic) struct CGSize { double width; double height; } lastCollectionViewSize;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UIStackView *titleBar;
@property (retain, nonatomic) NSMutableArray *titleLabels;
@property (retain, nonatomic) UIView *titleIndicator;
@property (nonatomic) double titleBarHeight;
@property (nonatomic) long long titleBarAlignment;
@property (retain, nonatomic) UIColor *titleNormalColor;
@property (retain, nonatomic) UIColor *titleSelectedColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *titleSelectedFont;
@property (weak, nonatomic) id<MJPageViewV2Delegate> delegate;
@property (weak, nonatomic) id<MJPageViewV2DataSource> dataSource;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupTitleBar;
- (void)layoutTitleBar;
- (void)setupCollectionView;
- (void)updateTitleLabelStyle;
- (void)scrollTitleBarToIndex:(long long)a0 animated:(BOOL)a1;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (void)reloadPageAtIndex:(long long)a0;
- (void)reloadData;
- (void)didTapTitle:(id)a0;
- (void)scrollContentToIndex:(long long)a0 animated:(BOOL)a1;
- (void)reloadTitles;
- (void)reloadContents;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
