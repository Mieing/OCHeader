@class IESECSKUPOIViewModel;
@protocol IESECSKUPOISectionControllerDelegate;

@interface IESECSKUPOISectionController : IGListSectionController

@property (retain, nonatomic) IESECSKUPOIViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUPOISectionControllerDelegate> delegate;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
