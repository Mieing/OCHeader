@class AnimaXValueParam;

@interface AnimaXFrameInfo : NSObject

@property (readonly, nonatomic) float startFrame;
@property (readonly, nonatomic) float endFrame;
@property (readonly, nonatomic) AnimaXValueParam *startValue;
@property (readonly, nonatomic) AnimaXValueParam *endValue;
@property (readonly, nonatomic) float linearProgress;
@property (readonly, nonatomic) float interpolatedProgress;
@property (readonly, nonatomic) float overallProgress;

- (id)initWithStartFrame:(float)a0 endFrame:(float)a1 startValue:(id)a2 endValue:(id)a3 linearProgress:(float)a4 interpolatedProgress:(float)a5 overallProgress:(float)a6;
- (void).cxx_destruct;
- (id)description;

@end
