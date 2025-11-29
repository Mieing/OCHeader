@class NSArray, UICollectionView, AWEProfileMoreMenuViewModel, AWEProfileMenuVerticalSectionViewModel, NSString;

@interface AWEProfileMenuVerticalContainerCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEUserMessage>

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) AWEProfileMenuVerticalSectionViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double lastWidth;
@property (copy, nonatomic) id /* block */ didSelectedBlock;
@property (retain, nonatomic) AWEProfileMoreMenuViewModel *parentviewModel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (double)heightOfCellWithModels:(id)a0;

- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (BOOL)hasTopFollowListMenu;
- (void)showSpecialFollowGuideIfNeededWithShowMethod:(unsigned long long)a0;
- (void)configWithModel:(id)a0 viewModel:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;

@end
