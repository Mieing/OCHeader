@interface AWEPerfLoadCache : AWEPerfLoadCustom

@property (readonly, nonatomic, getter=isSuccess) BOOL success;

- (void)endWithSuccess:(BOOL)a0 atTime:(double)a1;
- (void)endWithSuccess:(BOOL)a0 beginTime:(double)a1 endTime:(double)a2;
- (void)cancel;

@end
