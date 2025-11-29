@class NSDictionary, AWEAwemeModel, UIView, UILabel, AWETVDetailVideoActionButton;

@interface AWERelatedVideoDetailVideoInteractView : UIView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *line;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL likeByDoubleTapped;
@property (retain, nonatomic) UIView *inputContainerView;
@property (retain, nonatomic) UILabel *inputLabel;
@property (retain, nonatomic) AWETVDetailVideoActionButton *likeButton;
@property (retain, nonatomic) AWETVDetailVideoActionButton *shareButton;
@property (retain, nonatomic) AWETVDetailVideoActionButton *commentBtn;
@property (retain, nonatomic) AWETVDetailVideoActionButton *collectBtn;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (copy, nonatomic) id /* block */ commentActionBlock;
@property (copy, nonatomic) id /* block */ collectionActionBlock;
@property (copy, nonatomic) id /* block */ digActionBlock;
@property (copy, nonatomic) id /* block */ rewardActionBlock;
@property (copy, nonatomic) id /* block */ inputButtonClicked;
@property (copy, nonatomic) id /* block */ trackShowRewardButton;

- (void)updateCommentCount;
- (void)updateDiggCount;
- (void)onCommentButtonClicked;
- (void)onShareButtonClicked;
- (void)updateShareCount;
- (void)updateCollectionCount;
- (void)playCollectAnimation;
- (void)playUnCollectAnimation;
- (void)playLottieAnimationView:(unsigned long long)a0;
- (void)onCollectionButtonClicked;
- (void)onLikeButtonClicked;
- (void)refreshModel:(id)a0 params:(id)a1;
- (void)updateInteractViewButtons;
- (void)onInputLabelClicked;
- (void)handleVideoDoubleTapped;
- (void)playDigAnimation;
- (void)playUnDigAnimation;
- (void).cxx_destruct;
- (id)init;

@end
