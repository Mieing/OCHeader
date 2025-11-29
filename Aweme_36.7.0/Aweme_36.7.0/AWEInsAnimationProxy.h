@class NSString, AWEPlayInteractionReusableChecker;
@protocol AWEInsAnimationDelegate;

@interface AWEInsAnimationProxy : NSObject <CAAnimationDelegate>

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEPlayInteractionReusableChecker *checker;
@property (weak, nonatomic) id<AWEInsAnimationDelegate> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithTarget:(id)a0;

- (id)getCurrentChecker;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithTarget:(id)a0;

@end
