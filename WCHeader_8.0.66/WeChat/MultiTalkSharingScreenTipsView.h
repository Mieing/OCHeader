@class UIImageView, UILabel, UIView;

@interface MultiTalkSharingScreenTipsView : UIView

@property (readonly, nonatomic) long long currentStyle;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *tipsLabel;

+ (double)preferredHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showTips;
- (void)delayShowIconTipsAnimated;
- (void)hideTips;
- (void)layoutLongTips;
- (void)layoutIconTips;
- (void).cxx_destruct;

@end
