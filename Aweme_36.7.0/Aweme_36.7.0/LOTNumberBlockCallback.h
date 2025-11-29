@class NSString;

@interface LOTNumberBlockCallback : NSObject <LOTNumberValueDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBlock:(id /* block */)a0;

- (double)floatValueForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startValue:(double)a4 endValue:(double)a5 currentValue:(double)a6;
- (void).cxx_destruct;

@end
