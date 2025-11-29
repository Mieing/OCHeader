@class IESLLPOIDetailNGAwemeCommentsComponentViewModel, IESLLPOIDetailLynxCollectionViewCell, IESLLPOIDetailNGPageContext;

@interface IESLLPOIDetailNGAwemeCommentsComponentView : LLDitoComponentView

@property (retain, nonatomic) IESLLPOIDetailLynxCollectionViewCell *cell;
@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;
@property (weak, nonatomic) IESLLPOIDetailNGAwemeCommentsComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
