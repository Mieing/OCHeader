@class NSString, AWEIMMessageBubbleGradientPresenter;

@interface AWEIMMessageBubbleBackgroundComponent : AWEIMFlexComponent <AWEIMMessageBubbleBackground_Action>

@property (retain, nonatomic) AWEIMMessageBubbleGradientPresenter *gradientPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateGradientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_bubbleNormalColor:(id)a0;
- (BOOL)p_shouldShowGradientView:(id)a0;
- (void).cxx_destruct;

@end
