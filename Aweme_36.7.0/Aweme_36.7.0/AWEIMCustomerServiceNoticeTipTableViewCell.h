@class UIImageView, YYLabel;

@interface AWEIMCustomerServiceNoticeTipTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleLable;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)p_updateConstraints;
- (void)configWithMessage:(id)a0;
- (void)p_configMessage;
- (void)p_refreshCellHeight;
- (void)p_iconViewRemoveAnimation;
- (void)p_iconViewAddAnimation;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setupUI;

@end
