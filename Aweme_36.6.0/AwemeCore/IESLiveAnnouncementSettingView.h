@class IESLiveAnnouncementSettingSection, NSString, UICollectionView, IESLiveAnnouncementViewModel, NSMutableArray, UIViewController;

@interface IESLiveAnnouncementSettingView : IESLiveAnnouncementPageView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *sectionModels;
@property (retain, nonatomic) IESLiveAnnouncementSettingSection *fansGroupSection;
@property (copy, nonatomic) id /* block */ hideCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)popupItemType;

- (void)setupSections;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 viewController:(id)a2;
- (id)titleForNavBar;
- (void)reloadItemForSection:(id)a0 item:(id)a1;
- (id)leftActionsForNavBar;
- (void)applyCornerRadiusOnCell:(id)a0 indexPath:(id)a1;
- (void)setupFansGroupSection;
- (void)hideAndUpdateData;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)show;
- (void)setupCollectionView;
- (void)setupUI;
- (void)reloadSection:(id)a0;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;
- (void)registerClasses;

@end
