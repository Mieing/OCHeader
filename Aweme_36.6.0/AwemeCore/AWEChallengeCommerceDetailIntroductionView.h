@class NSString, AWECommerceChallengeParticipationInfoView, AWEChallengeModel, AWETaskTrialProductView, UIView, UIPanGestureRecognizer, AWECommerceMissionDetailView;
@protocol AWEChallengeDetailHorizontalVideoView, AWEChallengeDetailHorizontalLivePlayerView, AWEAdChanllengeHorizontalTabView, AWEChallengeCommerceDetailIntroductionTitleView, AWEChallengeCommerceDetailIntroductionViewDelegate;

@interface AWEChallengeCommerceDetailIntroductionView : UIView <AWEFoldingLabelDelegate, UIGestureRecognizerDelegate, AWEChallengeCommerceDetailIntroductionView>

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) UIView *contentBGView;
@property (retain, nonatomic) AWECommerceChallengeParticipationInfoView *participationInfoView;
@property (retain, nonatomic) AWECommerceMissionDetailView *missionView;
@property (retain, nonatomic) AWETaskTrialProductView *taskTrialProductView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalLivePlayerView> *adLivePreviewCardsView;
@property (retain, nonatomic) UIView<AWEAdChanllengeHorizontalTabView> *tabView;
@property (retain, nonatomic) UIPanGestureRecognizer *contentBGViewLeftPanGesture;
@property (nonatomic) double contentBGViewHeight;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEChallengeCommerceDetailIntroductionViewDelegate> delegate;
@property (retain, nonatomic) UIView<AWEChallengeCommerceDetailIntroductionTitleView> *titleView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalVideoView> *exampleView;
@property (nonatomic) BOOL hasSupplementaryElementsInPanel;

- (void)updateWithChallenge:(id)a0;
- (void)enterLivePreviewCardView;
- (void)cancelUserInteractionDuringAnimation;
- (void)hideLivePreviewCardView;
- (void)onTitleViewTapped;
- (void)onMissionViewDetailLabelTappedWithHeightDiff:(double)a0;
- (void)contentBGViewHandlePan:(id)a0;
- (void)updateTitleViewWithChallenge:(id)a0;
- (void)updateTrialProductInfoWithChallenge:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
