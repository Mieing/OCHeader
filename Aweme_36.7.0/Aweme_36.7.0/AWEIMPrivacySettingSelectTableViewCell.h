@class UIImageView, DUXSettingSwitch, UILabel, MASConstraint;

@interface AWEIMPrivacySettingSelectTableViewCell : AWEIMPrivacySettingBaseTableViewCell

@property (retain, nonatomic) MASConstraint *switchConstraint;
@property (retain, nonatomic) MASConstraint *selectConstraint;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *selectTipLabel;
@property (retain, nonatomic) DUXSettingSwitch *switchBtn;

- (void)configWithModel:(id)a0;
- (void)switchControlDidChanged:(id)a0;
- (void)p_updateTipLabelConstraint;
- (void)updateHorizontalConstraint;
- (struct CGSize { double x0; double x1; })titleContentSize;
- (void)makeConstraintForRatio:(double)a0 containerWitdh:(double)a1 leftAttachment:(double)a2 rightAttachment:(double)a3 leftFancySubtitleWidth:(double)a4;
- (double)titleContentWidth;
- (void).cxx_destruct;
- (void)setupUI;

@end
