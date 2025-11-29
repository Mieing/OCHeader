@class AWEProfileEditFlowLocationDetailView;

@interface AWEProfileEditFlowLocationView : AWEProfileEditFlowStepView

@property (retain, nonatomic) AWEProfileEditFlowLocationDetailView *detailView;

- (void)p_updateUI;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidAppear:(BOOL)a0;

@end
