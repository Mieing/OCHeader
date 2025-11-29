@class NSString;

@interface LOTPointValueCallback : NSObject <LOTPointValueDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } pointValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withPointValue:(struct CGPoint { double x0; double x1; })a0;

- (struct CGPoint { double x0; double x1; })pointForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startPoint:(struct CGPoint { double x0; double x1; })a4 endPoint:(struct CGPoint { double x0; double x1; })a5 currentPoint:(struct CGPoint { double x0; double x1; })a6;

@end
