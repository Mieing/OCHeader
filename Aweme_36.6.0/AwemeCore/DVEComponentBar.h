@class NSArray, UICollectionView, NSMutableDictionary, NSString, UIButton;
@protocol DVEComponentActionProtocol, DVEEditingRuntimeProtocol, DVEComponentSortProtocol, DVEBarComponentProtocol;

@interface DVEComponentBar : DVEBaseBar <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UICollectionView *collectView;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) id<DVEBarComponentProtocol> currentBackComponent;
@property (nonatomic) double itemHeight;
@property (weak, nonatomic) id<DVEComponentActionProtocol> componentActionHandler;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEComponentSortProtocol> componentSorter;
@property (retain, nonatomic) NSMutableDictionary *backComponentDic;
@property (retain, nonatomic) id<DVEBarComponentProtocol> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)enableAccessibility:(BOOL)a0;
- (id)firstCell;
- (void)buildLayout;
- (double)buttonLeft;
- (void)refreshBar;
- (void)showInView:(id)a0 animation:(BOOL)a1;
- (long long)componentStatus:(id)a0;
- (void)setupBackButton:(BOOL)a0;
- (double)buttonRightSpace;
- (void)clickToBack;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonHittestInsets;
- (double)itemWidthWithUpgrade;
- (double)itemWidthWithBack;
- (double)itemWidthForMainMenu;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)itemWidth;
- (double)buttonWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsets;

@end
