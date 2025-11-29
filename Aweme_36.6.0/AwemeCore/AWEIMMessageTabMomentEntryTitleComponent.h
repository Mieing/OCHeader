@class NSString, UIImageView, AWEBinding, UIView;
@protocol AWEIMMessageTabNaviBarInterface, AWEIMMessageTabMomentEntryInterface, AWEIMChatListInterface;

@interface AWEIMMessageTabMomentEntryTitleComponent : AWEIMComponentBase <AWEIMMessageTabNaviTitleViewProvider, AWEIMMessageTabNaviBarAction, AFDCloseFriendsMessage>

@property (weak, nonatomic) id<AWEIMMessageTabMomentEntryInterface> momentEntryComponent;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBarInterface> naviBarService;
@property (weak, nonatomic) id<AWEIMChatListInterface> chatListService;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIView *guideView;
@property (retain, nonatomic) UIView *guideBackgroundView;
@property (retain, nonatomic) UIView *listIconView;
@property (retain, nonatomic) UIImageView *listIconImageView;
@property (retain, nonatomic) AWEBinding *avatarViewDataBinding;
@property (retain, nonatomic) AWEBinding *avatarViewAnimationBinding;
@property (retain, nonatomic) UIView *cameraIconView;
@property (retain, nonatomic) UIView *defaultTitleView;
@property (nonatomic) BOOL momentDisabled;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)closeFriendsDidUpdatedUserSetting:(BOOL)a0;
- (void)navigationBarDidUpdateTitleView;
- (BOOL)canShowCurrentTitleView;
- (id)currentNavigationTitleView;
- (void)setupIconViews;
- (void)p_setupListIconView;
- (void)updateIconViewsAlpha:(double)a0;
- (void)moemntEntranceIconTapped;
- (void)guideAnimation;
- (void).cxx_destruct;
- (void)dealloc;

@end
