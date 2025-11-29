@class UIView;
@protocol ACCTextLoadingViewProtcol;

@interface AWEVideoDraftLoadingView : UIView

@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *impl;

+ (id)showOnView:(id)a0 title:(id)a1 delay:(double)a2;

- (void)panAction:(id)a0;
- (void)p_showTitle:(id)a0 delay:(double)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction:(id)a0;

@end
