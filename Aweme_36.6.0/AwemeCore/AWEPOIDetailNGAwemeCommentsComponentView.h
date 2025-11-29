@class AWEPOIDetailNGPageContext, AWEPOIDetailNGAwemeCommentsComponentViewModel, AWEPOIDetailLynxCollectionViewCell;

@interface AWEPOIDetailNGAwemeCommentsComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailLynxCollectionViewCell *cell;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGAwemeCommentsComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
