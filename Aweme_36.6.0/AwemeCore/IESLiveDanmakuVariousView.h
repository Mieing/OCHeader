@class IESLiveDanmakuNormalLabel, NSString, UIImageView, UIView, IESLiveAnimatedImageView, IESLiveDanmakuVariousViewModel;
@protocol IESEZDanmakuViewDelegate;

@interface IESLiveDanmakuVariousView : IESLiveDanmakuBaseView <IESEZDanmakuViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *avatarBadgeView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) IESLiveDanmakuNormalLabel *contentLabel;
@property (nonatomic) double cacheDanmukuWidth;
@property (retain, nonatomic) IESLiveAnimatedImageView *badgeView;
@property (retain, nonatomic) IESLiveDanmakuVariousViewModel *viewModel;
@property (nonatomic) double danmuPauseTime;
@property (nonatomic) double danmuResumeDuration;
@property (weak, nonatomic) id<IESEZDanmakuViewDelegate> danmakuViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)refreshContentWithViewModel:(id)a0;
- (void)p_startPinnedTimer;
- (BOOL)pinModeRequired;
- (struct CGPoint { double x0; double x1; })pinningPosition;
- (void)refreshDanmakuWithViewModel:(id)a0;
- (BOOL)enableJump;
- (void)danmaItemClicked;
- (id)schemeForJump:(id)a0;
- (void)trackDanmaWithEventName:(id)a0;
- (BOOL)enableBadgeIcon;
- (void).cxx_destruct;
- (void)resumeAnimation;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setup;
- (void)setupViews;

@end
