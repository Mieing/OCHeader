@class UIView, IESLLGDCardWrapperComponentViewModel;

@interface IESLLGDCardWrapperComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLGDCardWrapperComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *wrapperView;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
