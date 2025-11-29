@interface OMCAutoVolumeCalculator : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMFAudioAutoVolumeCalculator> { struct XMFAudioAutoVolumeCalculator *_ptr; } backingAutoVolumeCalculator;

- (id)init;
- (id)calculateVolumeWithClipSegments:(id)a0 baseLoudness:(double)a1 autoVolumeLevel:(double)a2 segmentAnalysisDuration:(double)a3 subSegmentDuration:(double)a4;
- (void)calculateLoudnessWithClipSegment:(id)a0 timeRangeInMedia:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
