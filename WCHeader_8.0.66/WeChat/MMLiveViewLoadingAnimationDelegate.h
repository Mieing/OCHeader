@class MMLiveView, NSString;

@interface MMLiveViewLoadingAnimationDelegate : NSObject <CAAnimationDelegate> {
    long long _startTime;
}

@property (copy, nonatomic) id /* block */ overTimeBlock;
@property (weak, nonatomic) MMLiveView *liveView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
