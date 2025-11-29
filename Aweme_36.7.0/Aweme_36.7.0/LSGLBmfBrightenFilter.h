@interface LSGLBmfBrightenFilter : NSObject

@property (nonatomic) BOOL videoBrightenDisabled;

- (BOOL)setup:(id)a0 callback:(id /* block */)a1;
- (id)getReport;
- (id)process:(id)a0 frameTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 outputBufferGetter:(id /* block */)a2;
- (id)videoBrightenParams;

@end
