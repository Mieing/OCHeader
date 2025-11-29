@class NSString, AWEUITextLoadingView, AWEUILoadingView;

@interface AWEUserAccountLoadingHUD : UIView

@property (retain, nonatomic) AWEUITextLoadingView *textLoadingView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *title;

- (void)showOnView:(id)a0 withTitle:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
