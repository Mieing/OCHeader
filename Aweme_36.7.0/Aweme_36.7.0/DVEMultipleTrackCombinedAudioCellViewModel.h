@class NSArray, DVEAudioWaveViewModel;

@interface DVEMultipleTrackCombinedAudioCellViewModel : DVEMultipleTrackViewCellViewModel

@property (retain, nonatomic) DVEAudioWaveViewModel *audioWaveViewModel;
@property (retain, nonatomic) NSArray *segments;

- (id)currentSegments;
- (id)initWithContext:(id)a0 segments:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 backgroundColor:(id)a3 title:(id)a4 icon:(id)a5 timeScale:(double)a6 audioWaveViewModel:(id)a7;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })targetTimeRange;

@end
