@class NSString;
@protocol RTVThrottlable;

@interface RTVInteractionThrottlerConfig : RTVThrottlerConfig

@property (copy, nonatomic) id /* block */ targetBlock;
@property (copy, nonatomic) NSString *actionString;
@property (weak, nonatomic) id<RTVThrottlable> throttlable;

+ (id)configWithTarget:(id)a0 action:(SEL)a1 interval:(double)a2 throttlable:(id)a3;

- (id)initWithTarget:(id)a0 action:(SEL)a1 interval:(double)a2 throttlable:(id)a3;
- (void).cxx_destruct;

@end
