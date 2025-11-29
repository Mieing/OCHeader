@class DUXNavigationBar, DitoContainerBodySketchStatusErrorVC, AWEUILoadingView;
@protocol DitoContainerSketchViewDelegateProtocol;

@interface DitoContainerSketchView : UIView

@property (retain, nonatomic) DitoContainerBodySketchStatusErrorVC *errorVC;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (weak, nonatomic) id<DitoContainerSketchViewDelegateProtocol> delegate;

- (void)showOnView:(id)a0;
- (void)updateSketchViewWithStatus:(unsigned long long)a0 shouldHideLoading:(BOOL)a1 shouldHideError:(BOOL)a2 shouldHideNavigationBar:(BOOL)a3;
- (void)resetStatusView;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
