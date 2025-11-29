@class UITapGestureRecognizer, NSString, UIImageView, UIView, NSAttributedString, YYLabel;
@protocol RTVInteractionMessageBubbleDelegate, RxInjector, RTVSettingsManager;

@interface RTVInteractionMessageBubble : UIView <RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) YYLabel *text;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGPoint { double x; double y; } anchorAdjustment;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (weak, nonatomic) UIView *anchorView;
@property (nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (nonatomic) double additionYOffset;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<RTVInteractionMessageBubbleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__configAnimationAnchorPoint;
- (void)showAttributedBubble:(id)a0 forView:(id)a1 container:(id)a2 direction:(unsigned long long)a3 anchorAdjustment:(struct CGPoint { double x0; double x1; })a4 maxWidth:(double)a5;
- (void)__adjustContentViewIfNeeded;
- (void)__onBubbleClicked:(id)a0;
- (void)__configContentView;
- (void)__configTextView;
- (void)__configArrowView;
- (unsigned long long)__arrowImageOrientationBasedOnBubblePosition;
- (void)__configBubbleWithOrientation:(unsigned long long)a0;
- (void)showAttributedBubble:(id)a0 forView:(id)a1 direction:(unsigned long long)a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 maxWidth:(double)a4;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshLayout;

@end
