@class NSString, AWEChallengeModel, UIView, UIPanGestureRecognizer;
@protocol AWEChallengeDetailIntroductionViewDelegate2, AWEChallengeDetailHorizontalLivePlayerView, AWEAdChanllengeHorizontalTabView, AWEChallengeDetailTaskInfoView, AWEFoldingLabel, AWEChallengeDetailIntroductionTitleView;

@interface AWEChallengeDetailIntroductionView2 : UIView <AWEFoldingLabelDelegate, UIGestureRecognizerDelegate, AWEChallengeDetailIntroductionView2>

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView<AWEChallengeDetailHorizontalLivePlayerView> *adLivePreviewCardsView;
@property (retain, nonatomic) UIView<AWEAdChanllengeHorizontalTabView> *tabView;
@property (retain, nonatomic) UIPanGestureRecognizer *leftPanGesture;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) BOOL isECommerceCardShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEChallengeDetailIntroductionViewDelegate2> delegate;
@property (retain, nonatomic) UIView<AWEChallengeDetailIntroductionTitleView> *titleView;
@property (retain, nonatomic) UIView<AWEFoldingLabel> *descriptionLabel;
@property (retain, nonatomic) UIView<AWEChallengeDetailTaskInfoView> *missionView;
@property (nonatomic) BOOL hasSupplementaryElementsInPanel;

+ (double)preferedContentLineHeight;

- (void)updateDescriptionLabelWithChallenge:(id)a0;
- (struct CGSize { double x0; double x1; })layoutWithConstrainedWidth:(double)a0;
- (void)updateWithChallenge:(id)a0;
- (BOOL)label:(id)a0 shouldTreatAsInteractiveElementForCheckingResult:(id)a1;
- (id)label:(id)a0 attributesForCheckingResult:(id)a1;
- (void)label:(id)a0 didInteractWithURL:(id)a1;
- (void)enterLivePreviewCardView;
- (void)cancelUserInteractionDuringAnimation;
- (void)commerceChallengeDetailHeaderViewHeightDidChangeWithDiff:(double)a0;
- (void)hideLivePreviewCardView;
- (void)updateTitleViewWithChallenge:(id)a0;
- (void)setupECommerceCardIfNeed;
- (void)handleLeftPan:(id)a0;
- (void)setHasSupplementaryElementInPanel:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
