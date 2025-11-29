@class NSString;
@protocol CAAnimationDelegate;

@interface IESLiveAnimationDelegate : NSObject <CAAnimationDelegate>

@property (weak) id<CAAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationDelegate:(id)a0;

@end
