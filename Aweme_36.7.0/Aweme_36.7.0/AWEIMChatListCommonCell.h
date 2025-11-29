@class UIStackView, NSMutableDictionary, NSIndexPath, UIView, MASConstraint, AWEIMChatCellViewModel;
@protocol AWEIMChatListCommonCellAnimationDelegate;

@interface AWEIMChatListCommonCell : AWEIMSwipeTableViewCell

@property (weak, nonatomic) AWEIMChatCellViewModel *cellViewModel;
@property (retain, nonatomic) MASConstraint *nameLabelCenterYConstraint;
@property (retain, nonatomic) MASConstraint *minTailWidthConstraint;
@property (retain, nonatomic) MASConstraint *zeroTailWidthConstraint;
@property (retain, nonatomic) MASConstraint *topAndRightLowerContainerConstraint;
@property (retain, nonatomic) MASConstraint *avatarCenterYConstraint;
@property (retain, nonatomic) MASConstraint *avatarTopConstraint;
@property (retain, nonatomic) MASConstraint *bottomAndRightLowerContainerMarginConstraint;
@property (retain, nonatomic) UIView *horizontalLine;
@property (nonatomic) BOOL shouldHideHorizontalLine;
@property (retain, nonatomic) NSMutableDictionary *componentsViewMap;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIStackView *topContainer;
@property (retain, nonatomic) UIStackView *centerContainer;
@property (retain, nonatomic) UIStackView *bottomContainer;
@property (retain, nonatomic) UIStackView *rightContainer;
@property (retain, nonatomic) UIStackView *rightUpperContainer;
@property (retain, nonatomic) UIStackView *rightCenterContainer;
@property (retain, nonatomic) UIStackView *rightLowerContainer;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (retain, nonatomic) NSIndexPath *cachedIndexPathInChatList;
@property (weak, nonatomic) id<AWEIMChatListCommonCellAnimationDelegate> animationDelegate;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)handleAvatarLongPress:(id)a0;
- (void)configCell:(id)a0;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)setupBaseInit;
- (void)ensureRightContainerMinimumWidth:(BOOL)a0;
- (void)configCellBodyInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)disableCellSeparator:(BOOL)a0;
- (void)updateVoiceOverAccessibilityValue:(id)a0;
- (void)makeAvatarTopEqualToTopContainer:(BOOL)a0;
- (void)makeNameLabelCenterY:(BOOL)a0;
- (void)makeMarginBetweenBottomAndRightLower:(BOOL)a0;
- (void)onThemeDidChanged;
- (void)setupChatBackgroundColorOf:(id)a0;
- (void)updateAvatarContainer;
- (id)chatBackgroundColor;
- (BOOL)__shouldUseNoticeChatBGColor:(id)a0;
- (void)setupCellBaseConfig;
- (void)p_setupContentContainerView;
- (void)p_setupSubViewsInView:(id)a0;
- (double)p_scaleFactor;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;

@end
