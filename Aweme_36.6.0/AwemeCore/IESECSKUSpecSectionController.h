@class NSString, IESECSKUSpecViewModel;

@interface IESECSKUSpecSectionController : IGListSectionController <IGListSupplementaryViewSource, IESECSKUSpecCellDelegate, IESECSKUSpecHeaderDelegate>

@property (retain, nonatomic) IESECSKUSpecViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)didUpdateToObject:(id)a0;
- (id)supplementaryViewSource;
- (void)tappedSizeComponent;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
