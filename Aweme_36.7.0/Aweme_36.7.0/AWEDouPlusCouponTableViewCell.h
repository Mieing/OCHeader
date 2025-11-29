@class AWEDouPlusCouponModel, AWEButton, UIImageView, UILabel, UIView, CAShapeLayer;

@interface AWEDouPlusCouponTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *thresholdLabel;
@property (retain, nonatomic) UILabel *couponNameLabel;
@property (retain, nonatomic) UILabel *availableLabel;
@property (retain, nonatomic) AWEButton *selectBtn;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) UIImageView *expiringImageView;
@property (retain, nonatomic) CAShapeLayer *horizonalDottedLineLayer;
@property (retain, nonatomic) CAShapeLayer *verticalDottedLineLayer;
@property (retain, nonatomic) AWEDouPlusCouponModel *couponModel;
@property (copy, nonatomic) id /* block */ selectCouponActionBlock;

+ (id)couponTimeFormatter;
+ (id)cellIdentifier;
+ (double)cellHeight;

- (void)updateSelectedButtonStatus:(BOOL)a0;
- (void)updateDottedLineLayerColor;
- (void)updateSubViewsLayout;
- (void)selectBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
