@class ContentArea, IESLivePKFlexActivityPanelViewModel;

@interface IESLivePKFlexActivityContentArea : UIView

@property (retain, nonatomic) ContentArea *area;
@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;

- (id)initWithViewModel:(id)a0 areaIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)layoutUI;

@end
