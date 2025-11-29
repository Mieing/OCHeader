@class NSString, UICollectionView, UILabel, ACCTextTypeFaceCategoryModel;

@interface ACCTextTypeFaceCategoryView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) ACCTextTypeFaceCategoryModel *model;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL modernUI;
@property (nonatomic) BOOL notReloadWhenSelect;
@property (copy, nonatomic) id /* block */ didSelectedBlk;
@property (copy, nonatomic) id /* block */ willDisplayBlk;
@property (copy, nonatomic) id /* block */ shouldResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)updateWithItemModel:(id)a0;
- (void)clearPanel;
- (void)scrollToSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateAccessibilityForCurrentSelection;
- (id)accessibilityDescriptionForItem:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)cellClass;
- (void)setupUI;
- (id)cellIdentifier;
- (void)setupAccessibility;
- (double)collectionHeight;

@end
