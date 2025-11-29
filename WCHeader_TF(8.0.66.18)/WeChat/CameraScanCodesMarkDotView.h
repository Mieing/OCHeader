@class UIImageView, CameraScanCodesMarkDotInfo, MMUIButton, CAAnimationGroup;

@interface CameraScanCodesMarkDotView : UIView {
    UIImageView *_dotView;
    MMUIButton *_clickButton;
    CAAnimationGroup *_showAnimation;
    CAAnimationGroup *_breatheAnimation;
}

@property (retain, nonatomic) CameraScanCodesMarkDotInfo *markDotInfo;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)init;
- (void)setupSubviews;
- (void)setupShowAnimation;
- (void)setupBreatheAnimation;
- (void)layoutSubviews;
- (void)startShowAnimationWithIsMultiCodes:(BOOL)a0;
- (void)startBreatheAnimation;
- (void)stopAllAnimations;
- (void)onButtonClicked:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
