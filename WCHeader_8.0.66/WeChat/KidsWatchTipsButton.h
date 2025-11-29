@class UIColor, NSString, UIImageView, MMUILabel;

@interface KidsWatchTipsButton : UIControl

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) UIImageView *accessoryView;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *svgIconName;
@property (retain, nonatomic) UIColor *iconColor;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIcon;
- (void)updateAccessibility;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;

@end
