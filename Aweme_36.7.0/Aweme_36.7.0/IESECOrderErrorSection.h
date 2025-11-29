@class IESECOrderErrorViewModel;

@interface IESECOrderErrorSection : IGListSectionController <YataListSectionController>

@property (retain, nonatomic) IESECOrderErrorViewModel *viewModel;

- (id)cellForItemAtIndex:(long long)a0;
- (id)initWithSectionViewModel:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
