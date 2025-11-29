@class YYLabel, IESLLPOIDetailNGPOIMallTitleComponentViewModel;

@interface IESLLPOIDetailNGPOIMallTitleComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLPOIDetailNGPOIMallTitleComponentViewModel *viewModel;
@property (retain, nonatomic) YYLabel *poiMallTitleLabel;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
