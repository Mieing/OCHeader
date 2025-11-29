@class MMVoidCallback, NSString;

@interface MMKindaAnimatorImpl : NSObject <CAAnimationDelegate, MMKindaAnimator>

@property (retain, nonatomic) MMVoidCallback *shakeCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
