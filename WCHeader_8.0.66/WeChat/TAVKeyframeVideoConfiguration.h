@class NSString, NSMutableArray;

@interface TAVKeyframeVideoConfiguration : NSObject <TAVVideoComposition>

@property (retain, nonatomic) NSMutableArray *keyframes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applyEffectToSourceImage:(id)a0 renderInfo:(id)a1;
- (void)insertKeyframe:(id)a0;
- (void)removeKeyframe:(id)a0;
- (void)removeAllKeyframes;
- (void)removeKeyframesInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void).cxx_destruct;

@end
