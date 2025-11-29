@class NSString;

@interface LOTSizeBlockCallback : NSObject <LOTSizeValueDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBlock:(id /* block */)a0;

- (struct CGSize { double x0; double x1; })sizeForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startSize:(struct CGSize { double x0; double x1; })a4 endSize:(struct CGSize { double x0; double x1; })a5 currentSize:(struct CGSize { double x0; double x1; })a6;
- (void).cxx_destruct;

@end
