@class LLDitoGeneralPlaceHolderComponentViewModel, UIView;

@interface LLDitoGeneralPlaceHolderComponentView : LLDitoComponentView

@property (weak, nonatomic) LLDitoGeneralPlaceHolderComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *separatorLine;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tapAction:(id)a0;

@end
