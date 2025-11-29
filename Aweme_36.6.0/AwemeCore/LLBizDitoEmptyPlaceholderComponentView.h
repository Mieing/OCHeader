@class LLBizDitoEmptyPlaceholderComponentViewModel, LLBizDitoEmptyViewController;

@interface LLBizDitoEmptyPlaceholderComponentView : LLDitoComponentView

@property (weak, nonatomic) LLBizDitoEmptyPlaceholderComponentViewModel *viewModel;
@property (retain, nonatomic) LLBizDitoEmptyViewController *emptyVC;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
