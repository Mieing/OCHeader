@class AVAsset;

@interface IESSCAudioMedia : IESSCMedia

@property (retain, nonatomic) AVAsset *emptyAsset;

- (id)tracksForType:(id)a0;
- (id)trackInfoForType:(id)a0 atIndex:(long long)a1;
- (id)pcmBufferAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 audioFormat:(id)a1;
- (void).cxx_destruct;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
