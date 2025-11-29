@class AWEIMGroupShareCommandAvatarView, UIView, UILabel, UIButton;

@interface AWEIMNewcomerReportCardMessageTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) AWEIMGroupShareCommandAvatarView *avatarView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *reportButton;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (void)__trackShowData;
- (void)__updateButtonUI;
- (void)__updateTitleText;
- (void)__updateButtonStatusUI;
- (void)__handelTapCloseButton:(id)a0;
- (void)__handelTapReportButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplayCell;

@end
