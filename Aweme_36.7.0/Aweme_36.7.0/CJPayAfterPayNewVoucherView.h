@class UIImageView, UILabel, UIView, UIButton;

@interface CJPayAfterPayNewVoucherView : UIView

@property (retain, nonatomic) UIView *voucherBgView;
@property (retain, nonatomic) UIImageView *downArrowImgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *voucherDescLabel;
@property (retain, nonatomic) UIView *checkBgView;
@property (retain, nonatomic) UILabel *checkLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)p_buildVoucherDescAttribute:(id)a0;
- (void)p_playAction;
- (void)updateWithVoucherDesc:(id)a0 needArrow:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
