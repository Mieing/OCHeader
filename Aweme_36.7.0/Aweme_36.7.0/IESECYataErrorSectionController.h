@class IESECYataErrorSectionViewModel;

@interface IESECYataErrorSectionController : IGListSectionController <YataListSectionController>

@property (retain, nonatomic) IESECYataErrorSectionViewModel *viewModel;

+ (id)reuseIdentifier;

- (id)cellForItemAtIndex:(long long)a0;
- (id)initWithSectionViewModel:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
