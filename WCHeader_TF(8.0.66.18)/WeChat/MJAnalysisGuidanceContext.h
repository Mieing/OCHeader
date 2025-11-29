@class NSOrderedSet, NSArray, MJMovieComposingAssetsClassifyHelper;

@interface MJAnalysisGuidanceContext : NSObject

@property (readonly, nonatomic) unsigned long long entrance;
@property (readonly, nonatomic) NSOrderedSet *segmentVMs;
@property (readonly, nonatomic) NSArray *originAssets;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timelineDuration;
@property (readonly, nonatomic) MJMovieComposingAssetsClassifyHelper *assetsClassifyHelper;

- (id)initWithEntrance:(unsigned long long)a0 segmentVMs:(id)a1 originAssets:(id)a2 timelineDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 assetsClassifyHelper:(id)a4;
- (void).cxx_destruct;

@end
