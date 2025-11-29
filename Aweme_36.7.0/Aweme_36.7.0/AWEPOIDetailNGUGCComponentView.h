@class AWEPOIDetailFeedUgcCell, AWEPOIDetailNGPageContext, AWEPOIDetailNGUGCComponentViewModel, UIView;

@interface AWEPOIDetailNGUGCComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailFeedUgcCell *cell;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUGCComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *foldAnimationBackgroundView;

- (void)updateViewModel:(id)a0;
- (void)startHighlightViewWithColor:(id)a0 delay:(double)a1 duration:(double)a2;
- (void)lynxDidRemove;
- (void)updateFoldAnimationBackgroundViewWithHeight:(double)a0;
- (void)setBaseCellClipsToBounds:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
