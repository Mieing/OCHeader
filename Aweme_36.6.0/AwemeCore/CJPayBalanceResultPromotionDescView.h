@class CJPayStyleButton, UIImageView, NSString, UILabel;

@interface CJPayBalanceResultPromotionDescView : UIView

@property (retain, nonatomic) UIImageView *rightTopIconView;
@property (retain, nonatomic) UILabel *rightTopDescLabel;
@property (retain, nonatomic) UILabel *rightBottomDescLabel;
@property (retain, nonatomic) UILabel *endTimeLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (copy, nonatomic) NSString *jumpUrl;

- (void)updateWithPromotionModel:(id)a0;
- (void)p_buttonClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
