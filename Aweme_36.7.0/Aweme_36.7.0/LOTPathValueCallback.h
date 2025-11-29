@class NSString;

@interface LOTPathValueCallback : NSObject <LOTPathValueDelegate>

@property (nonatomic) const struct CGPath { } *pathValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withCGPath:(const struct CGPath { } *)a0;

- (struct CGPath { } *)pathForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3;

@end
