@class NSString;

@interface LOTColorBlockCallback : NSObject <LOTColorValueDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBlock:(id /* block */)a0;

- (struct CGColor { } *)colorForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startColor:(struct CGColor { } *)a4 endColor:(struct CGColor { } *)a5 currentColor:(struct CGColor { } *)a6;
- (void).cxx_destruct;

@end
