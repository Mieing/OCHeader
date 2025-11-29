@class RTVInteractionBlurEffectView;
@protocol RTVXRControllerInjector;

@interface RTVInteractionToolBarCell : RTVCollectionViewCell

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVInteractionBlurEffectView *effectView;
@property (nonatomic) BOOL disableBlurBackground;
@property (nonatomic) BOOL disableHightedAnimation;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (double)highlightedScale;
- (void)__createComponents;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
