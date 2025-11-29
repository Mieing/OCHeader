@class CJPayBindCardPayReConfirmViewModel, CJPayButton, UIImageView, UILabel, UIView, CJPayStandardButton;

@interface CJPayBindCardPayReConfirmView : UIView

@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *greyBGView;
@property (retain, nonatomic) UIImageView *bankIconView;
@property (retain, nonatomic) UILabel *bankDescLabel;
@property (retain, nonatomic) UIImageView *tipsIconView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) CJPayStandardButton *confirmPayBtn;
@property (retain, nonatomic) CJPayBindCardPayReConfirmViewModel *model;

- (id)initWithBindCardReConfirmModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
