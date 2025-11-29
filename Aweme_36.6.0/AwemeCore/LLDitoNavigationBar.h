@class LLDitoNavigationBarViewModel, UIView;
@protocol IESLLNavigationBarInterface;

@interface LLDitoNavigationBar : LLDitoComponentView

@property (retain, nonatomic) UIView<IESLLNavigationBarInterface> *duxNavigationBar;
@property (retain, nonatomic) LLDitoNavigationBarViewModel *navigationBarVM;

- (void)updateViewModel:(id)a0;
- (void)backButtonPress;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
