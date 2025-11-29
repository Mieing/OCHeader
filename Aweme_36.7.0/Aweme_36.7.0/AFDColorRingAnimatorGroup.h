@class UIViewPropertyAnimator, NSArray;

@interface AFDColorRingAnimatorGroup : NSObject

@property (retain, nonatomic) UIViewPropertyAnimator *driverAnimator;
@property (retain, nonatomic) NSArray *slaveAnimators;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) NSArray *allAnimators;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)startAll;
- (id)initWithDriverAnimator:(id)a0 slaveAnimators:(id)a1;
- (void)stopAnimators;
- (void)stopAndReset;
- (void)setReverse;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)cleanup;
- (void)pause;
- (void)dealloc;
- (void)setProgress:(double)a0;

@end
