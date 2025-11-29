@class NSString, IESECSKUNewInstallmentViewModel, IGListAdapter;
@protocol IESECSKUPOISectionControllerDelegate, IESECSKUNewInstallmentSectionDelegate;

@interface IESECSKUNewInstallmentSectionController : IGListSectionController <IGListAdapterDataSource, IESECSKUInstallmentEmbeddedSectionControllerDelegate, IESECSKUNewInstallmentCellDelegate>

@property (retain, nonatomic) IESECSKUNewInstallmentViewModel *viewModel;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (weak, nonatomic) id<IESECSKUPOISectionControllerDelegate> poiDelegate;
@property (weak, nonatomic) id<IESECSKUNewInstallmentSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)didUpdateToObject:(id)a0;
- (void)clickTradeInItem:(id)a0;
- (void)didSelectInstallmentAtIndex:(long long)a0;
- (void)clickPOIInfo;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
