@class CJPayOutDisplayInfoModel, UIImageView, UILabel, UIView, UIButton;

@interface CJPayAfterPayVoucherView : UIView

@property (retain, nonatomic) UIView *voucherContainerView;
@property (retain, nonatomic) UIImageView *downArrowImgView;
@property (retain, nonatomic) UIImageView *voucherImgView;
@property (retain, nonatomic) UILabel *voucherDescLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) CJPayOutDisplayInfoModel *outDisplayInfo;
@property (copy, nonatomic) id /* block */ clickVoucherViewBlock;

- (void)p_playAction;
- (void)updateWithOutDisplayInfoModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
