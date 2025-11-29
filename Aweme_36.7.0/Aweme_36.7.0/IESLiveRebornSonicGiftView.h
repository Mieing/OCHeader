@class CAGradientLayer, CALayer, UIImageView, NSString, UILabel, UIView, HTSLiveArtTextLabel;

@interface IESLiveRebornSonicGiftView : IESLiveSonicAndSportsBaseView {
    BOOL isAnimating;
    BOOL isComboView;
    BOOL isGroup;
    BOOL isFaked;
    NSString *giftKey;
    id /* block */ onAnimationEnd;
}

@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *comboContainerView;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboXLabel;
@property (retain, nonatomic) HTSLiveArtTextLabel *comboNumberLabel;
@property (copy, nonatomic) id /* block */ stopAnimationTask;
@property (retain, nonatomic) CAGradientLayer *flashLayer;
@property (retain, nonatomic) CALayer *outlineMaskLayer;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) BOOL isTopGiftView;

- (void)didSetAttachingDIContext;
- (void)stopAnimationWithCompletionHandler:(id /* block */)a0;
- (void)updateWithGiftAnimationNode:(id)a0;
- (id /* block */)onAnimationEnd;
- (void)startFlashAnimation;
- (BOOL)isFaked;
- (void)setIsFaked:(BOOL)a0;
- (void)setOnAnimationEnd:(id /* block */)a0;
- (void)p_updateColorIndexWithPrice:(unsigned long long)a0;
- (void)setIsComboView:(BOOL)a0;
- (BOOL)fromCurrentUser;
- (void)startAnimationWithCompletionHandler:(id /* block */)a0 messageListCallback:(id /* block */)a1;
- (void)startComboAnimation:(id)a0 groupCount:(id)a1 upperBound:(BOOL)a2 completionHandler:(id /* block */)a3 messageListCallback:(id /* block */)a4;
- (void)setGiftKey:(id)a0;
- (BOOL)isComboView;
- (void)p_renderComboCount:(id)a0 upperBound:(BOOL)a1;
- (void)startAnimationWithCompletionHandler:(id /* block */)a0 shouldAutoStop:(BOOL)a1 messageListCallback:(id /* block */)a2;
- (void)startComboAnimation:(id)a0 groupCount:(id)a1 upperBound:(BOOL)a2 completionHandler:(id /* block */)a3 shouldAutoStop:(BOOL)a4 messageListCallback:(id /* block */)a5;
- (void)p_setStaticImageOnGiftTrayWithURL:(id)a0;
- (void)upgradeWithGiftAnimationNode:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)a0;
- (BOOL)isGroup;
- (void)setIsGroup:(BOOL)a0;
- (id)giftKey;
- (void)layoutUI;

@end
