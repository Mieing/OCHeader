@class IESLiveAnimatedImageView, UIColor, UIView;
@protocol IESLiveUnifiedGiftComboSubviewDelegate;

@interface IESLiveUnifiedGiftComboArrow : UIView

@property (weak, nonatomic) id<IESLiveUnifiedGiftComboSubviewDelegate> delegate;
@property (retain, nonatomic) UIView *flyArrowContainer;
@property (retain, nonatomic) IESLiveAnimatedImageView *flyArrowPlayer;
@property (nonatomic) int flyWebpStatus;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highLightColor;
@property (nonatomic) double arrowYOffset;

- (BOOL)isBigGift;
- (id)initWithDelegate:(id)a0 normalColor:(id)a1 highLightColor:(id)a2 arrowYOffset:(double)a3;
- (id)backgroundViewContainer;
- (double)getAlpha;
- (void)startRemoveAnimation;
- (id)getFlyAnimation;
- (id)bigGiftFlyAnimation;
- (id)smallGiftFlyAnimation;
- (id)initWithDelegate:(id)a0 normalColor:(id)a1 highLightColor:(id)a2;
- (void)setupSubview;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;

@end
