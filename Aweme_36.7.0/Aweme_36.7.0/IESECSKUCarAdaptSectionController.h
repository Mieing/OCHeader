@class IESECSKUCarAdaptViewModel;

@interface IESECSKUCarAdaptSectionController : IGListSectionController

@property (retain, nonatomic) IESECSKUCarAdaptViewModel *viewModel;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
