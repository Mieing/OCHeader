@protocol FBSDKLoginTooltipViewDelegate;

@interface FBSDKLoginTooltipView : FBSDKTooltipView

@property (weak, nonatomic) id<FBSDKLoginTooltipViewDelegate> delegate;
@property (nonatomic, getter=shouldForceDisplay) BOOL forceDisplay;

- (id)init;
- (void)presentInView:(id)a0 withArrowPosition:(struct CGPoint { double x0; double x1; })a1 direction:(unsigned long long)a2;
- (void).cxx_destruct;

@end
