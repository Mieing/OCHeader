@class MASConstraint, UIImageView, UILabel, UIView, CJPayVoucherRetainMsgModel;

@interface CJPayOutRetainVoucherItemView : UIView

@property (retain, nonatomic) UIImageView *voucherBgView;
@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UILabel *voucherWorthLabel;
@property (retain, nonatomic) UILabel *voucherLeftTagLabel;
@property (retain, nonatomic) UIView *voucherDescBgView;
@property (retain, nonatomic) UILabel *voucherTitleLabel;
@property (retain, nonatomic) UILabel *voucherDescLabel;
@property (retain, nonatomic) CJPayVoucherRetainMsgModel *msgModel;
@property (retain, nonatomic) MASConstraint *titleVoucherDescBgViewConstraint;
@property (retain, nonatomic) MASConstraint *descVoucherDescBgViewConstraint;

- (void)updateWithMsgModel:(id)a0;
- (void)p_adjustVoucherLeftTagLabel;
- (void)p_adjustVoucherWorthLabel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
