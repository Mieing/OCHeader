@class NSString, CAShapeLayer, UIImageView, UIView, AWEIMActiveUserIndicativeView;
@protocol AWEIMMessageListNaviBarTitleInterface;

@interface AWEIMMessageListNaviBarTitleAvatarComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider, AWEIMMessageListOnlineAction, AWEIMConversationDidFetchPeerFullDetailUserAction, AWEIMMessageListNaviBarTitleAvatarInterface>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *notchLayer;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *storyRing;
@property (retain, nonatomic) AWEIMActiveUserIndicativeView *onlineDotView;
@property (copy, nonatomic) NSString *lastGroupAvatar;
@property (weak, nonatomic) id<AWEIMMessageListNaviBarTitleInterface> naviBarTitleService;
@property (nonatomic) BOOL isHitStory25Exp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *onlineView;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (double)naviBarTitleViewCustomSpacing;
- (struct CGSize { double x0; double x1; })naviBarTitleViewIntrinsicContentSize;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)updateColorRingWithHidden:(BOOL)a0 config:(id)a1;
- (void)didFetchPeerFullDetailUser:(id)a0;
- (void)p_updateAvatar;
- (void)p_addBackgroundView;
- (BOOL)isAvatarContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateStory25ColorRingWithHidden:(BOOL)a0;
- (void)activeUserInfoChangeToNewValue:(id)a0;
- (void)nonFriendActiveUserInfoChangedToNewValue:(id)a0;
- (void)p_binding;
- (void)p_addColorRing;
- (void)p_addDots;
- (BOOL)p_colorRingEnabled;
- (void)p_updateDots;
- (void).cxx_destruct;

@end
