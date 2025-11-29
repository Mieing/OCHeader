@class UIImageView, AWEBinding, UILabel, CAShapeLayer;

@interface AWENoticePrivacySettingActionSheetCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) BOOL onlyBottomLine;
@property (nonatomic) BOOL drawLine;
@property (retain, nonatomic) AWEBinding *binding;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) CAShapeLayer *topLine;
@property (retain, nonatomic) CAShapeLayer *bottomLine;

- (void)configModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
