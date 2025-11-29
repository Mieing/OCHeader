@class UIImageView;

@interface MMLiveOnlineStateBar : MMLiveBaseOnlineStateBar

@property (retain, nonatomic) UIImageView *avatarIcon;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateOnlineCountTitle:(id)a0;
- (void)sizeToFits;
- (void)refreshWidgetsForFontSizeChange;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onOnlineStateButtonClicked;
- (void).cxx_destruct;

@end
