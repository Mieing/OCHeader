@interface QProgressAnimation : NSObject

@property (nonatomic) double duration;
@property (nonatomic) double step;
@property (nonatomic) double startTime;

- (id)init;
- (void)update:(double)a0;

@end
