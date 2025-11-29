@class UIView, IESLiveGradientView, NSString, IESLiveGoldenMicLabelViewModel, UIImageView, IESLiveGCDTimer, IESLiveImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveGoldenMicLabelViewV2 : UIView <CAAnimationDelegate, IESLiveGoldenLabelViewModelDelegate>

@property (nonatomic) BOOL isSinging;
@property (retain, nonatomic) UIView *goldenMicView;
@property (retain, nonatomic) IESLiveImageView *goldenMicIconView;
@property (retain, nonatomic) UILabel *goldenLabel;
@property (retain, nonatomic) IESLiveGradientView *bgView;
@property (retain, nonatomic) IESLiveGoldenMicLabelViewModel *viewModel;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *startSingAnimationView;
@property (retain, nonatomic) UILabel *singingLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *updateMicAnimationView;
@property (retain, nonatomic) UILabel *updateMicLabel;
@property (retain, nonatomic) IESLiveGCDTimer *loopAnimationTimer;
@property (weak, nonatomic) UIView *emojiContainer;
@property (nonatomic) long long startSingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContraints;
- (id)startAnimationView;
- (void)startSingAnimation;
- (void)endSingAnimation;
- (void)updateMicLabelCount:(id)a0;
- (void)showMicAnimationWithItem:(id)a0;
- (void)checkWaitingItemsArray;
- (void)cleanAnimations;
- (void)addFadeOutScaleAnimationInLayer:(id)a0 withIdentifier:(id)a1;
- (void)addFadeInScaleAnimationInLayer:(id)a0 withIdentifier:(id)a1;
- (void)hideGoldenMicIconIfNeed;
- (void)updateMicViewStyleWithMicCount:(long long)a0;
- (void)switchToMicCountAnimation;
- (void)switchToSingingAnimation;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)setupViews;
- (void)appWillEnterForeground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
