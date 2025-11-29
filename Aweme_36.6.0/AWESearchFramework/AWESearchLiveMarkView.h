@class UIImageView, CAGradientLayer, CAShapeLayer;

@interface AWESearchLiveMarkView : UIView

@property (retain, nonatomic) UIImageView *liveTagView;
@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;

- (void)startAnimationWithView:(id)a0 liveType:(unsigned long long)a1 showTag:(BOOL)a2;
- (void)resetLiveMarkWithView:(id)a0;
- (void)_addAnimationToMarkClipLayerTagType:(unsigned long long)a0;
- (void)setMarkLayerColorType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
