@interface AWEVideoImageGenerator : NSObject

@property (nonatomic) long long taskIdentifier;

- (void)requestImages:(unsigned long long)a0 effect:(BOOL)a1 index:(unsigned long long)a2 step:(double)a3 size:(struct CGSize { double x0; double x1; })a4 array:(id)a5 editService:(id)a6 oneByOneImageBlock:(id /* block */)a7 completion:(id /* block */)a8;
- (void)requestImages:(unsigned long long)a0 effect:(BOOL)a1 index:(unsigned long long)a2 startTime:(double)a3 step:(double)a4 size:(struct CGSize { double x0; double x1; })a5 array:(id)a6 editService:(id)a7 oneByOneImageBlock:(id /* block */)a8 completion:(id /* block */)a9;
- (void)p_invalidateCurrentTask;
- (void)p_requestImages:(unsigned long long)a0 effect:(BOOL)a1 index:(unsigned long long)a2 startTime:(double)a3 step:(double)a4 size:(struct CGSize { double x0; double x1; })a5 array:(id)a6 editService:(id)a7 taskIdentifier:(long long)a8 oneByOneImageBlock:(id /* block */)a9 completion:(id /* block */)a10;
- (void)cancel;

@end
