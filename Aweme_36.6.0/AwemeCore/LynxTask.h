@interface LynxTask : NSObject

@property (nonatomic) BOOL repeatable;

+ (id)taskWithData:(struct LynxData { unsigned long long x0; BOOL x1; char *x2; void *x3; })a0;

- (void)startWithObject:(id)a0;
- (void)start;

@end
