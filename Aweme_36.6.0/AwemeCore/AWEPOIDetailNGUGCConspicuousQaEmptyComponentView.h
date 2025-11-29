@class AWEPOIDetailNGPageContext, AWEPOIDetailFeedUgcConspicuousQaEmptyCell, AWEPOIDetailNGUGCConspicuousQaEmptyComponentViewModel;

@interface AWEPOIDetailNGUGCConspicuousQaEmptyComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailFeedUgcConspicuousQaEmptyCell *cell;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUGCConspicuousQaEmptyComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void)didCompleteShow;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
