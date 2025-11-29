@class UIButton, UIImageView, LOTAnimationView, UILabel, UIView, IESEffectModel;

@interface AWEStickerHintView : UIView

@property (retain, nonatomic) UILabel *stickerTipLabel;
@property (retain, nonatomic) UIImageView *stickerTipImageView;
@property (retain, nonatomic) UIView *stickerTipAnimatedContainerView;
@property (retain, nonatomic) UIImageView *stickerTipAnimatedImageView;
@property (retain, nonatomic) UILabel *stickerTipAnimatedLabel;
@property (retain, nonatomic) IESEffectModel *stickerModel;
@property (retain, nonatomic) UILabel *stickerTipLottieLabel;
@property (retain, nonatomic) LOTAnimationView *stickerTipLottieView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ hintViewShowBlock;
@property (copy, nonatomic) id /* block */ duetGreenScreenHintViewCompletionBlock;

- (void)closeButtonClicked;
- (void)showWithEffect:(id)a0;
- (void)removePhotoSensitiveHint;
- (void)showPhotoSensitiveWithEffect:(id)a0;
- (void)stopGifTipsAnimation;
- (void)stopLottieTipsAnimation;
- (void)showLottieTipsAnimationWithLottieType:(long long)a0 showCloseButton:(BOOL)a1;
- (void)showGifTipsAnimationWithGifType:(long long)a0 showCloseButton:(BOOL)a1;
- (void)showWithTitle:(id)a0;
- (void)startAnimationRepeat;
- (void)startGifTipsAnimationWithImage:(id)a0;
- (void)startLottieTipsAnimationWithJSON:(id)a0;
- (void)downloadLottieWithJSONUrl:(id)a0 completion:(id /* block */)a1;
- (void)showWithTitleRepeat:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)remove;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
