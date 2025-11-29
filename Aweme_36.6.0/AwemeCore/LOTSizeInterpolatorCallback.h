@class NSString;

@interface LOTSizeInterpolatorCallback : NSObject <LOTSizeValueDelegate>

@property (nonatomic) struct CGSize { double width; double height; } fromSize;
@property (nonatomic) struct CGSize { double width; double height; } toSize;
@property (nonatomic) double currentProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withFromSize:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1;

- (struct CGSize { double x0; double x1; })sizeForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startSize:(struct CGSize { double x0; double x1; })a4 endSize:(struct CGSize { double x0; double x1; })a5 currentSize:(struct CGSize { double x0; double x1; })a6;

@end
