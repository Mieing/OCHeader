@class AWEModernFeedActionButton, NSString, AWEModernFeedActionPanelFrame, AWEAwemeModel, UIView, UILabel;
@protocol AWEFeedVideoSingleCardLayoutAdjusterProtocol, _TtP9AWELottie13AWELottieView_;

@interface AWEModernFeedActionPanelView : UIView

@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *likeAnimationView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *favoriteAnimationView;
@property (nonatomic) BOOL favoriteAnimationInProgress;
@property (weak, nonatomic) AWEModernFeedActionPanelFrame *panelFrame;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *timeInfoLabel;
@property (retain, nonatomic) AWEModernFeedActionButton *likeButton;
@property (retain, nonatomic) AWEModernFeedActionButton *commentButton;
@property (retain, nonatomic) AWEModernFeedActionButton *favoriteButton;
@property (retain, nonatomic) AWEModernFeedActionButton *repostButton;
@property (retain, nonatomic) AWEModernFeedActionButton *shareButton;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long interactiveStyle;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (copy, nonatomic) id /* block */ favoriteBtnClickedBlock;
@property (copy, nonatomic) id /* block */ repostBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;
@property (retain, nonatomic) id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> qualityLayoutAdjuster;

- (void)updateDiggCount;
- (id)showStringFromNumber:(id)a0;
- (void)updateAwemeModel:(id)a0;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (void)setupSubviewContent;
- (void)_setupShareButtonDefaultImage;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)announceAccessibility:(id)a0;
- (void)_playDislikeAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })likeAnimationFrame;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (void)updateFavoriteCount;
- (void)_stopFavoriteAnimation;
- (void)_playFavoriteAnimation;
- (void)_playUnFavoriteAnimation;
- (id)lottieDatafromGecko:(id)a0;
- (void)configDefaultStyleWithFrame:(id)a0;
- (BOOL)shouldActionButtonShowZeroNumber;
- (void)setNewStyleToActionButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })favoriteAnimationFrame;
- (id)substituteForBriefModel:(id)a0;
- (void)configFriendStyleWithFrame:(id)a0;
- (void)adjustButtonUIStyle:(id)a0;
- (void)recoverButtonUIStyle:(id)a0;
- (void)setTimelabelTextWithLabel:(id)a0 frame:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
