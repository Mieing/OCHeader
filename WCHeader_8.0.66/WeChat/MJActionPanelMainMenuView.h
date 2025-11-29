@class NSArray, NSString, UICollectionView;
@protocol MJActionPanelMainMenuViewDelegate;

@interface MJActionPanelMainMenuView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) unsigned long long panelConfiguration;
@property (nonatomic) BOOL isSectionSeparatorVisible;
@property (nonatomic) BOOL shouldCellsCenterAligned;
@property (retain, nonatomic) NSArray *sectionInsets;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *menuItems;
@property (weak, nonatomic) id<MJActionPanelMainMenuViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMenuItems:(id)a0 configuration:(unsigned long long)a1;
- (void)setupConfiguration:(unsigned long long)a0;
- (void)commonInit;
- (BOOL)menuItemsHaveChanges:(id)a0;
- (void)updateWithMenuItems:(id)a0 configuration:(unsigned long long)a1 forceUpdate:(BOOL)a2;
- (void)updateSectionInsets;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)defaultSectionInsetsForCollectionView:(id)a0;
- (id)calculateHorizontalAlignmentInsetsForAllSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
