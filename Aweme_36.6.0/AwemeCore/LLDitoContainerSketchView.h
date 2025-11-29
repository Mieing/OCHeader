@class UIView, LLDitoContainerBodySketchStatusErrorVC;
@protocol LLDitoContainerSketchViewDelegateProtocol, IESLLPlatformLoadingView, IESLLNavigationBarInterface;

@interface LLDitoContainerSketchView : UIView

@property (retain, nonatomic) LLDitoContainerBodySketchStatusErrorVC *errorVC;
@property (retain, nonatomic) UIView<IESLLPlatformLoadingView> *loadingView;
@property (retain, nonatomic) UIView<IESLLNavigationBarInterface> *duxNavigationBar;
@property (weak, nonatomic) id<LLDitoContainerSketchViewDelegateProtocol> delegate;

- (void)showOnView:(id)a0;
- (void)updateSketchViewWithStatus:(unsigned long long)a0 shouldHideLoading:(BOOL)a1 shouldHideError:(BOOL)a2 shouldHideNavigationBar:(BOOL)a3;
- (void)resetStatusView;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
