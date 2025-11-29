@class UILabel;

@interface IESIMGeneralDisableCardView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL chatListHasBackgroundImg;

- (void)p_setupUIs;
- (void)configWithTitle:(id)a0 subTitle:(id)a1 numberOfLines:(long long)a2;
- (void)reloadTextColors;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
