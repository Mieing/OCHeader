@class UIImageView, UILabel, AWEPOIDetailNGPOIMallEmptyComponentViewModel;

@interface AWEPOIDetailNGPOIMallEmptyComponentView : DitoComponentView

@property (retain, nonatomic) UIImageView *mallEmptyView;
@property (retain, nonatomic) UILabel *mallLabel;
@property (weak, nonatomic) AWEPOIDetailNGPOIMallEmptyComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
