@class NSString;

@interface LOTPointBlockCallback : NSObject <LOTPointValueDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBlock:(id /* block */)a0;

- (struct CGPoint { double x0; double x1; })pointForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startPoint:(struct CGPoint { double x0; double x1; })a4 endPoint:(struct CGPoint { double x0; double x1; })a5 currentPoint:(struct CGPoint { double x0; double x1; })a6;
- (void).cxx_destruct;

@end
