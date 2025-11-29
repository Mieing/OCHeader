@class UILabel;

@interface AWEIMChatPanelCellBadgeView : UIView

@property (retain, nonatomic) UILabel *titleLabel;

+ (double)redDotSize;

- (struct CGSize { double x0; double x1; })configTitle:(id)a0;
- (void).cxx_destruct;
- (id)titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)resetUI;

@end
