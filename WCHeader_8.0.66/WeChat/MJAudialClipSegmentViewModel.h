@class OMCDecibelHeightCalculator, OMCClipSegment, OMCAudioWaveformProvider;

@interface MJAudialClipSegmentViewModel : MJElementSegmentViewModel {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _decibels;
    struct shared_ptr<std::vector<float>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _normalizedDecibelHeights;
    unsigned int _prevSampleCount;
}

@property (retain, nonatomic) OMCClipSegment *clipSegment;
@property (retain, nonatomic) OMCAudioWaveformProvider *waveformProvider;
@property (retain, nonatomic) OMCDecibelHeightCalculator *decibelHeightCalc;
@property (nonatomic) BOOL shouldUpdateWaveformProvider;

- (id)initWithClipSegment:(id)a0;
- (BOOL)syncWithSegment:(id)a0;
- (void)syncWithAudialClipSegmentImpl;
- (struct tuple<bool, const std::shared_ptr<std::vector<float>> &, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, bool, const std::shared_ptr<std::vector<float>> &, float> { BOOL x0; void *x1; float x2; } x0; })normalizedDecibelHeightsWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 sampleCount:(unsigned int)a1;
- (struct tuple<bool, const std::shared_ptr<std::vector<float>> &, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, bool, const std::shared_ptr<std::vector<float>> &, float> { BOOL x0; void *x1; float x2; } x0; })normalizedDecibelHeightsWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 sampleCount:(unsigned int)a1 forceUpdate:(BOOL)a2;
- (void)audialClipDidBeReplaced;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
