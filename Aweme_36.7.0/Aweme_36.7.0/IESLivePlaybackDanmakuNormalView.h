@class IESLiveDanmakuNormalLabel, NSString, UIImageView, UIView;

@interface IESLivePlaybackDanmakuNormalView : IESLivePlaybackDanmakuBaseView

@property (retain, nonatomic) UIView *popableCopyView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double cacheWidth;
@property (retain, nonatomic) IESLiveDanmakuNormalLabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *medalView;
@property (nonatomic) double originalAlpha;
@property (nonatomic) BOOL startPinnedTimerAfterShow;
@property (retain, nonatomic) UIImageView *avatarBadgeView;
@property (retain, nonatomic) UIImageView *arrowRightView;
@property (copy, nonatomic) NSString *jumpSchema;

- (struct CGSize { double x0; double x1; })arrowSize;
- (void)updateWithNode:(id)a0;
- (void)p_startPinnedTimer;
- (BOOL)pinModeRequired;
- (struct CGPoint { double x0; double x1; })pinningPosition;
- (id)popableView;
- (void)popFinished;
- (void)startAnimatedEmojiWhenPin;
- (void)trackDanmakuTapFailedWithReason:(id)a0;
- (struct CGSize { double x0; double x1; })medalImageSize;
- (void)setPinType:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)prepareForReuse;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setupUI;

@end
