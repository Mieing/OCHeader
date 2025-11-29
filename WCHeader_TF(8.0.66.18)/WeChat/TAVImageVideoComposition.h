@class TAVImageResource, TAVVideoConfiguration, NSString;

@interface TAVImageVideoComposition : NSObject <TAVVideoComposition, NSCopying>

@property (retain, nonatomic) TAVImageResource *resource;
@property (retain, nonatomic) TAVVideoConfiguration *videoConfiguration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageVideoCompositionWithImage:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (id)init;
- (id)initWithResource:(id)a0;
- (id)applyEffectToSourceImage:(id)a0 renderInfo:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
