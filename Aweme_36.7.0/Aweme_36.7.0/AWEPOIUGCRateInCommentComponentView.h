@class AWEPOIDetailNGPageContext, AWEPOIUGCRateInCommentCell, AWEPOIDetailNGUGCComponentViewModel;

@interface AWEPOIUGCRateInCommentComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIUGCRateInCommentCell *cell;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUGCComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void)lynxDidRemove;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
