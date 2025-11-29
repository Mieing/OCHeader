@class LLDitoComponentAgentCenter, LLDitoPageModel, LLDitoPageView;

@interface LLDitoSketchPageView : UIView

@property (retain, nonatomic) LLDitoPageView *pageView;
@property (retain, nonatomic) LLDitoPageModel *pageModel;
@property (weak, nonatomic) LLDitoComponentAgentCenter *agentCenter;

- (id)buildComponentViewModelWithNode:(id)a0;
- (void)createPageView;
- (void)fillPageModel:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
