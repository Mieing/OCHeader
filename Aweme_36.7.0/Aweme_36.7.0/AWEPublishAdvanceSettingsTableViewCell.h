@class AFDRoundedView, UIView, NSString, UIImageView, UIButton, AWEPublishAdvanceSettingsItem, UILabel, NSIndexPath;
@protocol AWEPublishAdvanceSettingsCellDelegate, AWESettingSwitchProtocol;

@interface AWEPublishAdvanceSettingsTableViewCell : UITableViewCell <AWEPublishAdvanceSettingsCellProtocol>

@property (retain, nonatomic) AWEPublishAdvanceSettingsItem *item;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *switcher;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *switchMaskView;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (nonatomic) unsigned long long cornerType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onSwitcherToggledBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupCorners;
- (void)showBottomLine:(BOOL)a0;
- (void)onCellClicked;
- (void)updateViewWithControlEnabled:(BOOL)a0;
- (void)tipButtonTapped:(id)a0;
- (void)onSwitcherToggled:(BOOL)a0;
- (void)animationContainerColor:(id)a0 animateDuration:(double)a1 afterTime:(double)a2 completion:(id /* block */)a3;
- (void)p_showDisableToast;
- (void)p_accessibilityActivate;
- (BOOL)isSupportHighlighted;
- (void)tapSwitchMaskView;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
