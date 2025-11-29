@class UIView, LOTAnimationView, NSString, AWEPlayInteractionUserAvatarGuideAnimationView, UIImageView, AWEPopoverActionSheet, AFDLeftExtensionPopoverSheetView, UILabel, AWEPlayInteractionLinkIconContainerView;
@protocol AWEAdAvatarView, AWEFeedLiveMarkViewNewTypeHeadProtocol, AWEFeedLiveDecorateViewProtocol, AWEFeedLiveMarkViewProtocol, AWEFormatFeedEntryViewProtocol;

@interface AWEPlayInteractionUserAvatarView : UIView <CAAnimationDelegate, AWEPlayInteractionUserAvatarViewProtocol>

@property (nonatomic) double followPromptViewBottomOffset;
@property (weak, nonatomic) UIImageView *avatarSendMessageImageView;
@property (weak, nonatomic) UIImageView *avatarEnterStoreImageView;
@property (retain, nonatomic) UIView *followedView;
@property (copy, nonatomic) id /* block */ followedClickedBlock;
@property (nonatomic) BOOL enableLeftHandOptimize;
@property (retain, nonatomic) UIView<AWEAdAvatarView> *userAvatarView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewNewTypeHeadProtocol> *liveMarkHeadView;
@property (retain, nonatomic) UIView<AWEFeedLiveDecorateViewProtocol> *liveDecorateView;
@property (retain, nonatomic) UIImageView *videoSourceImageView;
@property (retain, nonatomic) UILabel *friendLabel;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UIView *sendMessageView;
@property (retain, nonatomic) AWEPlayInteractionUserAvatarGuideAnimationView *sendMessageGuideView;
@property (weak, nonatomic) AWEPopoverActionSheet *userAvatarPopoverView;
@property (weak, nonatomic) AFDLeftExtensionPopoverSheetView *lightInteractionPopover;
@property (retain, nonatomic) UIView *enterStoreView;
@property (retain, nonatomic) AWEPlayInteractionUserAvatarGuideAnimationView *enterStoreGuideView;
@property (retain, nonatomic) AWEPlayInteractionLinkIconContainerView *linkIconContainerView;
@property (retain, nonatomic) UIImageView *userAvatarLinkIcon;
@property (retain, nonatomic) LOTAnimationView *followAnimationView;
@property (retain, nonatomic) LOTAnimationView *unfollowAnimationView;
@property (retain, nonatomic) UIView *followPromptView;
@property (nonatomic) BOOL canShowSpecialFollowEntrance;
@property (retain, nonatomic) UIView<AWEFormatFeedEntryViewProtocol> *formatMarkView;
@property (nonatomic) struct CGSize { double width; double height; } followAnimationViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)p_applySafeScaling;
- (void)layoutSubviews;
- (id)aAWEPadModuleAdapter;
- (void)playUnFollowAnimation;
- (void)playFollowAnimation:(id /* block */)a0;
- (void)setEnableLeftHandOptimize:(BOOL)a0 withPointInsideBlock:(id /* block */)a1;
- (void)changeSendMessageViewWithFlag:(BOOL)a0;
- (void)updateAvatarCornerRadius:(double)a0;
- (void)updateFollowedViewHide:(BOOL)a0;
- (void)configFollowedClickedBlock:(id /* block */)a0;
- (void)updateJXLayout;
- (void)lazyLoadLiveDecorateViewIfNeed;
- (void)loadLiveFeedMarkViewIfNeeded;
- (void)makeConstraints;
- (BOOL)shouldShrinkRightInteractionElement;
- (BOOL)enableLiveMarkOpt;
- (void)followedViewClicked;
- (BOOL)expandFollowArea;
- (BOOL)enableShowLiveHeadView;
- (void)updateRightContainerElement;
- (void)p_resetFollowAnimation;
- (id)opt_setupUserAvatarView:(id)a0;
- (double)getLiveMarkViewWidth;
- (id)p_enterStoreIcon;
- (void)addShadowWithSuperView:(id)a0 imageView:(id)a1 widthHeight:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
