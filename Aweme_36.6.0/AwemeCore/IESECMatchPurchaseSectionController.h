@class IESECMatchPurchaseItemModel, NSString;
@protocol IESECMatchPurchaseCellProtocol;

@interface IESECMatchPurchaseSectionController : IGListSectionController <IGListDisplayDelegate>

@property (retain, nonatomic) IESECMatchPurchaseItemModel *viewModel;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id<IESECMatchPurchaseCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (id)initWithMode:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
