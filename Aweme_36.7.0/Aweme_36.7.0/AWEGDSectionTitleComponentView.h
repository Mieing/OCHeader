@class AWEGDSectionTitleView, AWEGDSectionTitleComponentViewModel, UIView;

@interface AWEGDSectionTitleComponentView : DitoComponentView

@property (weak, nonatomic) AWEGDSectionTitleComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEGDSectionTitleView *sectionTitleView;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
