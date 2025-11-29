@class UITableView, AWEOlderVerticalGuideViewController, NSDictionary, NSString, AWEOlderInteractiveGuideViewController, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEOlderInteractiveGuideManager : NSObject <AWEOlderInteractiveGuideManagerProtocol>

@property (retain, nonatomic) NSDictionary *avatarGuideConfig;
@property (retain, nonatomic) NSDictionary *commenGuideConfig;
@property (retain, nonatomic) AWEOlderInteractiveGuideViewController *guideVC;
@property (retain, nonatomic) AWEOlderVerticalGuideViewController *verticalGuideVC;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionVC;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long tabType;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long loopTimes;
@property (nonatomic) long long lastShowCommentBubbleGuideIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)isOpenCommentVC;
- (void)showOlderInteractGuideWithVideoPlayInTargetVC:(id)a0 followStatus:(long long)a1 inContainerView:(id)a2 isNextLoop:(BOOL)a3 tabType:(long long)a4;
- (void)showOlderVerticalGuideWithTips:(id)a0 forTargetView:(id)a1 targetViewCickHandler:(id /* block */)a2;
- (BOOL)__userHasOpenOtherProfileVC;
- (BOOL)__interactMaskGuideTimeLimit;
- (BOOL)__userHasOpenCommentVC;
- (double)__olderInteractProfileGuideShowTimeGetter;
- (double)__guideShowInterval;
- (double)__olderInteractCommentGuideShowTimeGetter;
- (BOOL)__shouldShowInteractGuideNormal;
- (void)__clearAlreadyShowGuide;
- (BOOL)__showAvatarGuideIfNeeded;
- (BOOL)__showCommentGuideIfNeeded;
- (BOOL)__shouldShowInteractAvatarGuide;
- (double)__avatarGuideShowInterval;
- (long long)__olderInteractProfileGuideShowCountGetter;
- (long long)__avatarGuideShowCount;
- (void)__showAvatarGuide;
- (BOOL)__shouldShowInteractCommentGuide;
- (double)__commentGuideShowInterval;
- (long long)__olderInteractCommentGuideShowCountGetter;
- (long long)__commentGuideShowCount;
- (void)__showCommentGuide;
- (BOOL)__enableTableViewFullVisible;
- (id)__commentLabelString;
- (void)__olderInteractCommentGuideShowTimeStorage:(double)a0;
- (void)__olderInteractCommentGuideShowCountStorage:(long long)a0;
- (void)__trackOlderGuideShowWithType:(id)a0;
- (id)__avatarLabelString;
- (void)__olderInteractProfileGuideShowTimeStorage:(double)a0;
- (void)__olderInteractProfileGuideShowCountStorage:(long long)a0;
- (BOOL)__isHotTab;
- (BOOL)__isFamiliarTab;
- (BOOL)__checkCommentListShowingOnViewController:(id)a0;
- (BOOL)__checkSharePanelShowingOnViewController:(id)a0;
- (id)__getCurrentTableViewForViewController:(id)a0;
- (void)isOpenOtherProfileVC;
- (void)__olderInteractCommentBubbleGuideShowTimeStorage:(double)a0;
- (double)__olderInteractCommentBubbleGuideShowTimeGetter;
- (void)__olderInteractCommentBubbleGuideShowCountStorage:(long long)a0;
- (long long)__olderInteractCommentBubbleGuideShowCountGetter;
- (long long)__commentBubbleGuideShowCount;
- (long long)__commentBubbleGuideShowInterval;
- (void)__trackOlderGuieBubbleShowWithType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
