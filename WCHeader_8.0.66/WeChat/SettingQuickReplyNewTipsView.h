@class UIImageView, UIView, MMUICellSwitch, MMUILabel;

@interface SettingQuickReplyNewTipsView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUICellSwitch *switcher;
@property (retain, nonatomic) UIImageView *bubbleBgView;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIView *bottomLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0 tips:(id)a1;
- (void)setSwitchTarget:(id)a0 action:(SEL)a1;
- (void)setSwitcherOn:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeToFitWidth:(double)a0;
- (void).cxx_destruct;

@end
