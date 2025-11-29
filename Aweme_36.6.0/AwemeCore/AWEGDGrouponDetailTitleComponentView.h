@class AWEGDCardTitleView, AWEGDGrouponDetailTitleComponentViewModel, UIView;

@interface AWEGDGrouponDetailTitleComponentView : DitoComponentView

@property (weak, nonatomic) AWEGDGrouponDetailTitleComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEGDCardTitleView *cardTitleView;
@property (nonatomic) double marginBottom;

- (void)updateViewModel:(id)a0;
- (void)updateLayoutWithRatio:(double)a0;
- (void)handleTouchMove:(double)a0 originDistance:(double)a1;
- (void)updateCardHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
