@class DitoNavigationBarViewModel, DUXNavigationBar;

@interface DitoNavigationBar : DitoComponentView

@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) DitoNavigationBarViewModel *navigationBarVM;

- (void)updateViewModel:(id)a0;
- (void)backButtonPress;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
