@class AWEPOIDetailNGCOIHeaderComponentViewModel, AWEPOIDetailNGPageContext, AWEPOIDetailCOIHeaderView, AWEPOIDetailCOIExhibitionHeader;

@interface AWEPOIDetailNGCOIHeaderComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailCOIHeaderView *header;
@property (retain, nonatomic) AWEPOIDetailCOIExhibitionHeader *exhibitHeader;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGCOIHeaderComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void)updateHeaderMask:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
