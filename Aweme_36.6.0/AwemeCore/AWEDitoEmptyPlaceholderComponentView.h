@class AWEDitoEmptyPlaceholderComponentViewModel, AWEDitoEmptyViewController;

@interface AWEDitoEmptyPlaceholderComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoEmptyPlaceholderComponentViewModel *viewModel;
@property (retain, nonatomic) AWEDitoEmptyViewController *emptyVC;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
