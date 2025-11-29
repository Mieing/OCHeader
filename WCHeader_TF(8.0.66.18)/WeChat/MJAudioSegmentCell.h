@class MJAudioWaveformView, NSString;

@interface MJAudioSegmentCell : MJSegmentCell <MJAudioWaveformViewDelegate>

@property (nonatomic) BOOL contentCanBeDrawn;
@property (readonly, nonatomic) MJAudioWaveformView *waveformView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)audioWaveformViewDidLayout:(id)a0;
- (void)drawWaveformWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 sampleCount:(unsigned int)a1;
- (void)drawWaveformWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 sampleCount:(unsigned int)a1 forceUpdate:(BOOL)a2;
- (void).cxx_destruct;

@end
