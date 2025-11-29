@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface TranslationPresentAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) unsigned long long translationStyle;
@property (nonatomic) long long durationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
