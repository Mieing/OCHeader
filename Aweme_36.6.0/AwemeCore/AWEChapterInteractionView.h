@class AWEChapterInteractionItemButton, UIImageView, AWEAwemeModel, UILabel;

@interface AWEChapterInteractionView : UIView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickLabel;
@property (retain, nonatomic) AWEChapterInteractionItemButton *likeButton;
@property (retain, nonatomic) AWEChapterInteractionItemButton *shareButton;
@property (retain, nonatomic) AWEChapterInteractionItemButton *commentButton;
@property (retain, nonatomic) AWEChapterInteractionItemButton *collectButton;
@property (copy, nonatomic) id /* block */ shareActionBlock;
@property (copy, nonatomic) id /* block */ commentActionBlock;
@property (copy, nonatomic) id /* block */ collectionActionBlock;
@property (copy, nonatomic) id /* block */ diggActionBlock;
@property (copy, nonatomic) id /* block */ avatarImageViewActionBlock;
@property (copy, nonatomic) id /* block */ nickLabelActionBlock;

- (void)updateCommentCount;
- (void)updateDiggCount;
- (void)onCommentButtonClicked;
- (void)onShareButtonClicked;
- (void)updateShareCount;
- (void)refreshModel:(id)a0;
- (void)updateCollectionCount;
- (void)updateAvatarImage;
- (void)playDiggAnimation;
- (void)playUnDiggAnimation;
- (void)playCollectAnimation;
- (void)playUnCollectAnimation;
- (void)updateNickNameLabel;
- (void)playLottieAnimationView:(unsigned long long)a0;
- (void)onCollectionButtonClicked;
- (void)onLikeButtonClicked;
- (void)onAvatarImageViewClicked;
- (void)onNickLabelClicked;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })iconImageSize;

@end
