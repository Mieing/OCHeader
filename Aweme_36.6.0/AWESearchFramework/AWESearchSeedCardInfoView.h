@class BDImageView, CATextLayer, LOTAnimationView, UIButton, CALayer, YYLabel;
@protocol AWESearchSeedCardInfoViewDelegate;

@interface AWESearchSeedCardInfoView : UIView

@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (retain, nonatomic) LOTAnimationView *disLikeAnimationView;
@property (retain, nonatomic) CALayer *likeMaskView;
@property (retain, nonatomic) YYLabel *title;
@property (retain, nonatomic) BDImageView *authorImageView;
@property (retain, nonatomic) CATextLayer *author;
@property (retain, nonatomic) CALayer *authorMaskView;
@property (retain, nonatomic) CATextLayer *createDate;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) CATextLayer *likeCountLabel;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (weak, nonatomic) id<AWESearchSeedCardInfoViewDelegate> delegate;

+ (BOOL)showNewLargeFontStyle;

- (void)configUI;
- (void)playLikeAnimation;
- (void)likeButtonClick;
- (void)newConfigUI;
- (void)playDisLikeAnimation;
- (long long)syncGetAWESearchSeedShowCreateTime;
- (void)updateLikeNumber:(long long)a0;
- (void)updateFrameInfo;
- (void)updateClickAnimation:(BOOL)a0;
- (void)newUpdateFrameInfo:(struct CGSize { double x0; double x1; })a0 likeNumSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateFrameInfo:(struct CGSize { double x0; double x1; })a0 likeNumSize:(struct CGSize { double x0; double x1; })a1;
- (void)realStopLOTAnimation:(id)a0;
- (void)realPlayLikeAnimation;
- (void)realPlayDislikeAnimation;
- (id)showStringFromLongLong:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
