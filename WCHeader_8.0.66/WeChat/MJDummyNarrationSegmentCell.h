@class MJAudioWaveformView, OMCDecibelHeightCalculator;

@interface MJDummyNarrationSegmentCell : UIView {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _decibels;
    struct shared_ptr<std::vector<float>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _realDecibelHeights;
    struct shared_ptr<std::vector<float>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _allDecibelHeights;
    int _dummySampleCount;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _dummyDecibelHeights;
}

@property (nonatomic) BOOL contentCanBeDrawn;
@property (readonly, nonatomic) OMCDecibelHeightCalculator *decibelHeightCalc;
@property (readonly, nonatomic) MJAudioWaveformView *waveformView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithCaptionItems:(id)a0;
- (void)updateWithDecibels:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
