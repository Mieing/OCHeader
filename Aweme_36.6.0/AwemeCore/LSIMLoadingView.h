@class UIView;
@protocol LSIMLoadingViewProtocol;

@interface LSIMLoadingView : UIView

@property (readonly, nonatomic) UIView<LSIMLoadingViewProtocol> *loadingView;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
