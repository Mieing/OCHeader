@class IESECSKUNewSpecViewModel, NSString, UICollectionView, NSMutableArray;

@interface IESECSKUNewSpecSectionController : IGListSectionController <IESECSKUNewHeaderCellDelegate, IESECSKUNewSpecCellDelegate, IESECImagePreviewTransitionContextProvider, IESECSKUNumberCellDelegate, IESECMediaPreviewDelegate>

@property (retain, nonatomic) IESECSKUNewSpecViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *registerCellIdentifiers;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)mediaPreviewController:(id)a0 didDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 didSwipeToIndex:(long long)a1 previousIndex:(long long)a2;
- (void)didUpdateToObject:(id)a0;
- (id)targetViewForImagePreviewController:(id)a0 atIndex:(long long)a1;
- (void)tagCarAdapt;
- (void)tappedSpecSwitch:(long long)a0;
- (void)tappedSizeComponent:(id)a0;
- (void)minusTapped;
- (void)plusTapped;
- (void)didSelectSpecItem:(id)a0;
- (void)tapCoverImageWithSpecItem:(id)a0 placeholerView:(id)a1;
- (void)skuModuleShow:(id)a0 extra:(id)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
