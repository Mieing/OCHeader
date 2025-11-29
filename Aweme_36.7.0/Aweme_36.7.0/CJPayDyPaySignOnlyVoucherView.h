@class UIImageView, UILabel, UIView, CJPayDyPaySignOnlyVoucherModel;

@interface CJPayDyPaySignOnlyVoucherView : UIView

@property (retain, nonatomic) UIImageView *voucherBgView;
@property (retain, nonatomic) UIView *voucherHeadView;
@property (retain, nonatomic) UIView *voucherMarketingView;
@property (retain, nonatomic) UILabel *voucherWorthLabel;
@property (retain, nonatomic) UILabel *voucherMeasureLabel;
@property (retain, nonatomic) UILabel *reachedAmountDescLabel;
@property (retain, nonatomic) UILabel *voucherLeftDescLabel;
@property (retain, nonatomic) UIView *voucherDescBgView;
@property (retain, nonatomic) UILabel *voucherTitleLabel;
@property (retain, nonatomic) UILabel *voucherDescLabel;
@property (retain, nonatomic) UIView *voucherTagBg;
@property (retain, nonatomic) UILabel *voucherTagLabel;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) CJPayDyPaySignOnlyVoucherModel *model;

- (void)p_setupConstraints;
- (void)updateTimeLabel:(id)a0;
- (void)changeVoucherStatus:(BOOL)a0;
- (void)hideVoucherTime;
- (id)p_setVoucherBgImage:(BOOL)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
