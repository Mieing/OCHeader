@class IESECSKUInstallmentViewModel;
@protocol IESECSKUInstallmentEmbeddedSectionControllerDelegate;

@interface IESECSKUInstallmentEmbeddedSectionController : IGListSectionController

@property (retain, nonatomic) IESECSKUInstallmentViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUInstallmentEmbeddedSectionControllerDelegate> delegate;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (double)minimumLineSpacing;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
