@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCMessageErrorView : UIView

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (copy, nonatomic) id /* block */ reloadBlock;

- (void)configUI;
- (void)reloadButtonClick;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
