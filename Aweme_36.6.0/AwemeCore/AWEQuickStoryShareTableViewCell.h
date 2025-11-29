@class CAShapeLayer, AWEQuickStoryShareTableViewCellViewModel, UIImageView, UIImage, UILabel, UIView, UIButton;

@interface AWEQuickStoryShareTableViewCell : UITableViewCell <AWEIMStreakDisplayManagerDelegate>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIImageView *rightButtonLoadingView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) CAShapeLayer *loadingLayer;
@property (retain, nonatomic) AWEQuickStoryShareTableViewCellViewModel *viewModel;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;

+ (id)identifier;

- (void)asyncDidUpdateIMStreakView;
- (void)rightButtonClicked:(id)a0;
- (BOOL)hitStreakUpdateExp;
- (void)downloadStart;
- (void)downloadComplete;
- (void)rightButtonStartLoading;
- (void)rightButtonStopLoading;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)setupUI;
- (void)updateUI;
- (void)updateProgress:(double)a0;

@end
