@class UIStackView, NSString, AWEAwemeModel, AWERVDetailPageContext, AWERVDetailVideoActionButton;

@interface AWERVInteractiveButtonContainerView : UIView <AWEWatchVideoLaterMessage>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWERVDetailVideoActionButton *likeButton;
@property (retain, nonatomic) AWERVDetailVideoActionButton *shareButton;
@property (retain, nonatomic) AWERVDetailVideoActionButton *commentBtn;
@property (retain, nonatomic) AWERVDetailVideoActionButton *collectBtn;
@property (retain, nonatomic) AWERVDetailVideoActionButton *rewardButton;
@property (retain, nonatomic) AWERVDetailVideoActionButton *watchLaterButton;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (copy, nonatomic) id /* block */ commentActionBlock;
@property (copy, nonatomic) id /* block */ collectionActionBlock;
@property (copy, nonatomic) id /* block */ digActionBlock;
@property (copy, nonatomic) id /* block */ rewardActionBlock;
@property (copy, nonatomic) id /* block */ watchLaterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCommentCount;
- (void)updateDiggCount;
- (void)bindObserver;
- (void)onCommentButtonClicked;
- (void)onShareButtonClicked;
- (void)updateShareCount;
- (void)didAddToWatchLater:(id)a0;
- (void)didRemoveWatchLater:(id)a0;
- (void)updateCollectionCount;
- (void)handleWatchLaterInfoChangeNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (void)playCollectAnimation;
- (void)playUnCollectAnimation;
- (void)playLottieAnimationView:(unsigned long long)a0;
- (void)onCollectionButtonClicked;
- (void)onLikeButtonClicked;
- (void)playDigAnimation;
- (void)playUnDigAnimation;
- (void)updateRewardCount:(long long)a0;
- (BOOL)shouldShowWatchLaterButton;
- (id)watchLaterButtonTitle;
- (id)createActionButtonWithImageName:(id)a0 needHighlighted:(BOOL)a1 tapBlock:(id /* block */)a2;
- (void)rewardButtonClicked;
- (void)watchLaterButtonClicked;
- (void)trackWatchLaterShowIfNeeded;
- (void)updateInteractiveViewWithModel:(id)a0;
- (double)interactiveButtonContainerViewHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
