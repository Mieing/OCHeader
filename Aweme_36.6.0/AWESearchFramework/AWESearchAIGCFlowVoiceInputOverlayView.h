@class CAGradientLayer, LOTAnimationView, UIView, AWESearchAIGCBubbleTextView, UILabel;

@interface AWESearchAIGCFlowVoiceInputOverlayView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (retain, nonatomic) CAGradientLayer *visionBackgroundGradientLayer0;
@property (retain, nonatomic) CAGradientLayer *visionBackgroundGradientLayer1;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) CAGradientLayer *bubbleLayer;
@property (retain, nonatomic) LOTAnimationView *voiceToTextLottieView;
@property (retain, nonatomic) AWESearchAIGCBubbleTextView *bubbleLabel;
@property (nonatomic) double maxBubbleHeight;
@property (nonatomic) double maxLabelHeight;
@property (retain, nonatomic) UILabel *currentQueryLabel;
@property (nonatomic) double maxTrueBubbleHeight;
@property (nonatomic) double maxTrueBubbleWidth;

- (struct CGSize { double x0; double x1; })textQuerySizeWithText:(id)a0 width:(double)a1;
- (id)attributeStringWithText:(id)a0;
- (id)truncateText:(id)a0 toLines:(long long)a1 width:(double)a2 font:(id)a3;
- (void)updateBubbleText:(id)a0 completion:(id /* block */)a1;
- (void)updateBubbleText:(id)a0 textCenter:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)detachOverlayWithBubbleCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBubbleViewFrame;
- (void)updateBubbleLayerOpacity:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)colorNamed:(id)a0;
- (void)setupUI;
- (id)initWithViewType:(long long)a0;

@end
