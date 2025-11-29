@class IESECSKUInstallmentViewModel, IGListAdapter, NSString;

@interface IESECSKUInstallmentSectionController : IGListSectionController <IGListSupplementaryViewSource, IGListAdapterDataSource, IESECSKUInstallmentEmbeddedSectionControllerDelegate>

@property (retain, nonatomic) IESECSKUInstallmentViewModel *viewModel;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)didUpdateToObject:(id)a0;
- (id)supplementaryViewSource;
- (void)didSelectInstallmentAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
