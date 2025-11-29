@class UIView, AWEIMChatPanelBadgeViewModel, AWEIMChatPanelModel, UIColor, UIImageView, UIButton, UIVisualEffectView, UILabel, AWEIMChatPanelCellBadgeView;

@interface AWEIMChatPanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEIMChatPanelCellBadgeView *badgeView;
@property (retain, nonatomic) AWEIMChatPanelBadgeViewModel *badgeVM;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEIMChatPanelModel *model;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL hasBackgroundImage;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)addBlurView;
- (void)p_setupUIWithHorizontalLayout;
- (void)p_addBackgroundView;
- (void)__configTintColorWithColor:(id)a0;
- (void)__configCellBackgroundColorWithColor:(id)a0;
- (void)__setIconWithPlatformModel;
- (void)p_bindBadgeVM:(id)a0;
- (void)p_configBadgeView;
- (void)removeBlurView;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
