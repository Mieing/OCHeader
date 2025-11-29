@class IESECSKUCouponViewModel;
@protocol IESECSKUCouponSectionControllerDelegate;

@interface IESECSKUCouponSectionController : IGListSectionController

@property (retain, nonatomic) IESECSKUCouponViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUCouponSectionControllerDelegate> delegate;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
