@class AWEIMMessageConversation, AWEIMShareLiveMessage, AWEIMBaseLabel, UIVisualEffectView, UILabel, UIView, NSString, AWEIMShareLiveMessageViewModel, AWEIMShareLiveCardFreeTrialView, AWEGradientView, AWEIMShareLiveCardBottomCarouselView, AWEIMShareLiveMessageCardLivingView, UIImageView;

@interface AWEIMShareLiveCardView : UIView <IESLivePlayerControllerDelegate, AWELivePaidLivePlayerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *composerImageView;
@property (retain, nonatomic) AWEIMShareLiveMessage *model;
@property (retain, nonatomic) AWEIMShareLiveMessageViewModel *viewModel;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) AWEIMShareLiveCardBottomCarouselView *carouselView;
@property (retain, nonatomic) AWEIMShareLiveMessageCardLivingView *livingView;
@property (retain, nonatomic) AWEIMShareLiveCardFreeTrialView *freeTrialView;
@property (nonatomic) BOOL isForbiddenPullStreamForAsyncAuthentication;
@property (copy, nonatomic) id /* block */ liveCoverTappedBlock;
@property (copy, nonatomic) id /* block */ cardAvatarTappedBlock;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *livingTagView;
@property (retain, nonatomic) AWEIMBaseLabel *livingTagLabel;
@property (retain, nonatomic) UILabel *liveEndLabel;
@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableShareLivePendantShow;
+ (struct CGSize { double x0; double x1; })viewSizeWithMessage:(id)a0;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)trialTimeDidChange:(double)a0;
- (void)viewStatusDidChange:(long long)a0 hasShareTickets:(BOOL)a1;
- (BOOL)needMuteForFreeTrial;
- (id)customTrialView;
- (id)customTrialContainerView;
- (void)resetForReuse;
- (void)setupAllGesture;
- (void)updateWithCarouselItems:(id)a0;
- (void)makeBottomMaskView;
- (void)liveCoverTapped:(id)a0;
- (void)cardAvatarTapped:(id)a0;
- (void)cleanViews;
- (void)p_experimentStyleWithViewModel:(id)a0;
- (void)smoothEnterRoom;
- (void)transitionToPlayer;
- (BOOL)p_shouldShowPlayIcon;
- (void)updateBottomViewLayoutWithCarousel;
- (void)updateCommonTopViewLayout;
- (void)p_tryShowCarousel;
- (void)p_tryHideCarousel;
- (BOOL)p_isVoipEnable;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)updateWithViewModel:(id)a0;

@end
