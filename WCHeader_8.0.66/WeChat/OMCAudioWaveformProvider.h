@class OMCClipSegment;

@interface OMCAudioWaveformProvider : NSObject {
    OMCClipSegment *_clipSegment;
}

+ (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })fetchWaveformWithFilePath:(id)a0 sampleCount:(unsigned long long)a1;

- (id)initWithClipSegment:(id)a0;
- (void)updateSampleRate:(float)a0 forChannel:(int)a1;
- (void)updateSampleCount:(int)a0 forChannel:(int)a1;
- (BOOL)fetchWaveform:(void *)a0 startIndex:(int *)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forChannel:(int)a3;
- (void).cxx_destruct;

@end
