@class NSString;

@interface AWEIMChatSearchPopAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL isBigFontStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
