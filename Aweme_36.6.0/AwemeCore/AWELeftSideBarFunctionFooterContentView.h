@class UILabel, DUXBaseImageView, DUXBadge;

@interface AWELeftSideBarFunctionFooterContentView : UIView

@property (retain, nonatomic) DUXBaseImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (readonly, nonatomic) long long viewStyle;

+ (id)labelFontWithViewStyle:(long long)a0;
+ (double)imageLenWithViewStyle:(long long)a0;
+ (double)heightWithViewStyle:(long long)a0;

- (void)initView;
- (void)updateIconImageWithUrl:(id)a0;
- (void)updateViewStyle:(long long)a0;
- (void)initIconImageView;
- (void)initLabel;
- (void)initBadge;
- (BOOL)isBadgeDisplaying;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setBadgeHidden:(BOOL)a0;
- (void)updateLabelText:(id)a0;
- (void)setIconHidden:(BOOL)a0;

@end
