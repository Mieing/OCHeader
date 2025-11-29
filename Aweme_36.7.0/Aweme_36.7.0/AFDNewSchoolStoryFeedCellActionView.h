@class LOTAnimationView, AWEAwemeModel, UILabel, AFDNewSchoolStoryFeedCellFrameAction, AFDNewSchoolStoryFeedCellActionButton;

@interface AFDNewSchoolStoryFeedCellActionView : UIView

@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (retain, nonatomic) LOTAnimationView *favoriteAnimationView;
@property (nonatomic) BOOL favoriteAnimationInProgress;
@property (weak, nonatomic) AFDNewSchoolStoryFeedCellFrameAction *panelFrame;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *timeInfoLabel;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellActionButton *likeButton;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellActionButton *commentButton;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellActionButton *favoriteButton;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellActionButton *repostButton;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellActionButton *shareButton;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long interactiveStyle;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (copy, nonatomic) id /* block */ favoriteBtnClickedBlock;
@property (copy, nonatomic) id /* block */ repostBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;

- (void)updateDiggCount;
- (id)showStringFromNumber:(id)a0;
- (void)addSubviews;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (void)announceAccessibility:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })likeAnimationFrame;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (void)updateFavoriteCount;
- (void)configDefaultStyleWithFrame:(id)a0;
- (void)didStopLikeAnimation;
- (void)didPlayLikeAnimation;
- (void)didPlayDislikeAnimation;
- (BOOL)shouldActionButtonShowZeroNumber;
- (void)didStopFavoriteAnimation;
- (void)didPlayFavoriteAnimation;
- (void)didPlayUnFavoriteAnimation;
- (void)setNewStyleToActionButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })favoriteAnimationFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
