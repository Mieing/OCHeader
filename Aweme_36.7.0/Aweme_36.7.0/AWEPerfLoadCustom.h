@interface AWEPerfLoadCustom : AWEPerfLoadObject

- (void)endWithSuccess:(BOOL)a0 atTime:(double)a1;
- (void)endWithSuccess:(BOOL)a0 beginTime:(double)a1 endTime:(double)a2;
- (void)beginAtTime:(double)a0;
- (id)initWithCustomKind:(id)a0;
- (void)endWithSuccess:(BOOL)a0;
- (void)begin;
- (void)cancel;

@end
