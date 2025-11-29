@class IESECSKUNewInstallmentViewModel;
@protocol IESECSKUInstallmentEmbeddedSectionControllerDelegate;

@interface IESECSKUNewInstallmentEmbeddedSectionController : IGListSectionController

@property (retain, nonatomic) IESECSKUNewInstallmentViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUInstallmentEmbeddedSectionControllerDelegate> delegate;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
