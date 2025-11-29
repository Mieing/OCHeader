@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface WCFinderProfileWarningView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *tailIconView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long type;
@property (nonatomic) BOOL clickable;
@property (retain, nonatomic) UIView *rightView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tailView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)displayBackgroundColor;
- (id)displayIcon;
- (void).cxx_destruct;

@end
