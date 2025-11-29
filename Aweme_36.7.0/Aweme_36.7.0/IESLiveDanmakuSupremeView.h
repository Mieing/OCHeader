@class UIView, NSString, NSArray, UIImageView, NSDictionary, CAGradientLayer, IESLiveDanmakuNormalLabel, IESLiveAnimatedImageView, IESLiveDanmakuVariousViewModel;
@protocol IESEZDanmakuViewDelegate, IESLiveLanguageService, IESLiveWebPPlayer;

@interface IESLiveDanmakuSupremeView : IESLiveDanmakuBaseView <IESEZDanmakuViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveDanmakuNormalLabel *mainLabel;
@property (retain, nonatomic) UIImageView *mainBackgroundView;
@property (retain, nonatomic) UIView *mainContainerView;
@property (nonatomic) double cacheDanmukuWidth;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) NSArray *atmosphereLabels;
@property (retain, nonatomic) UIView *atmosphereMaskContainerView;
@property (retain, nonatomic) CAGradientLayer *atmosphereMaskLayer;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *shinningView;
@property (retain, nonatomic) NSDictionary *atmosphereOpcaity;
@property (retain, nonatomic) IESLiveAnimatedImageView *badgeView;
@property (retain, nonatomic) IESLiveDanmakuVariousViewModel *viewModel;
@property (weak, nonatomic) id<IESEZDanmakuViewDelegate> danmakuViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)refreshContentWithViewModel:(id)a0;
- (void)refreshDanmakuWithViewModel:(id)a0;
- (void)startAtmosphereContentAnimation;
- (void)disableHostLocalizationsWithLabel:(id)a0;
- (double)mainDanmakuWidth;
- (BOOL)enableBadgeIcon;
- (double)alphaAtmophereDanamkuWithIndex:(long long)a0;
- (BOOL)showAtmosphereDanmakuWithCurrentCols:(long long)a0 index:(long long)a1;
- (void)startAtmosphereContentAnimationWithDuration:(double)a0 speed:(double)a1;
- (void)stopAtmosphereContentAnimation;
- (void)layoutViews;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setup;
- (void)setupViews;

@end
