@class AWELeftSideBarFunctionFooterContentView, UITapGestureRecognizer;

@interface AWESideBarFunctionBottomItemView : UIView

@property (retain, nonatomic) AWELeftSideBarFunctionFooterContentView *contentView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)didClick;
- (void)updateIconImageWithUrl:(id)a0;
- (void)p_loadContentView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setBadgeHidden:(BOOL)a0;
- (void)updateLabelText:(id)a0;
- (void)setIconHidden:(BOOL)a0;

@end
