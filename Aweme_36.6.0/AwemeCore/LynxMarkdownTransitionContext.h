@interface LynxMarkdownTransitionContext : NSObject

@property (nonatomic) float transition_start;
@property (nonatomic) float transition_end;
@property (nonatomic) float transition_current;
@property (nonatomic) double transition_duration_time;
@property (nonatomic) double transition_start_time;
@property (nonatomic) double transition_current_time;

- (void)updateWithTime:(double)a0;
- (void)resetWithEnd:(float)a0 DurationTime:(double)a1;
- (id)init;
- (BOOL)transitionComplete;

@end
