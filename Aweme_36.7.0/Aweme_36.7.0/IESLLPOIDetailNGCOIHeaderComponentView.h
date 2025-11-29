@class IESLLPOIDetailCOIHeaderView, IESLLPOIDetailNGPageContext, IESLLPOIDetailNGCOIHeaderComponentViewModel, IESLLPOIDetailCOIExhibitionHeader;

@interface IESLLPOIDetailNGCOIHeaderComponentView : LLDitoComponentView

@property (retain, nonatomic) IESLLPOIDetailCOIHeaderView *header;
@property (retain, nonatomic) IESLLPOIDetailCOIExhibitionHeader *exhibitHeader;
@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;
@property (weak, nonatomic) IESLLPOIDetailNGCOIHeaderComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void)updateHeaderMask:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
