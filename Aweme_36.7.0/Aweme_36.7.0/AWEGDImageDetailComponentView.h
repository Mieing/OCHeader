@class AWEGDImageDetailComponentViewModel, NSString, AWEGDImageDetailView, UIView;

@interface AWEGDImageDetailComponentView : DitoComponentView <AWEGDImageDetailViewDelegate>

@property (weak, nonatomic) AWEGDImageDetailComponentViewModel *viewModel;
@property (retain, nonatomic) AWEGDImageDetailView *imageDetailView;
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)didTapImageDetailView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
