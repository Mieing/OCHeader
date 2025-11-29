@class UIButton, BDImageView, LOTAnimationView, YYLabel;
@protocol AWESearchSeedCardViewInfoViewDelegate;

@interface AWESearchSeedCardViewInfoView : UIView

@property (retain, nonatomic) YYLabel *title;
@property (retain, nonatomic) UIButton *authorInfo;
@property (retain, nonatomic) BDImageView *authorImageView;
@property (retain, nonatomic) YYLabel *author;
@property (retain, nonatomic) YYLabel *createDate;
@property (retain, nonatomic) UIButton *likeInfo;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (retain, nonatomic) YYLabel *likeCountLabel;
@property (nonatomic) long long likeCount;
@property (weak, nonatomic) id<AWESearchSeedCardViewInfoViewDelegate> delegate;

- (void)configUI;
- (void)playLikeAnimation;
- (void)likeButtonClick;
- (void)newConfigUI;
- (void)playDisLikeAnimation;
- (long long)syncGetAWESearchSeedShowCreateTime;
- (void)updateLikeNumber:(long long)a0;
- (void)updateClickAnimation:(BOOL)a0;
- (void)realPlayLikeAnimation;
- (void)realPlayDislikeAnimation;
- (id)showStringFromLongLong:(long long)a0;
- (void)realStopLikeAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
