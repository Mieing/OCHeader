@protocol MJAudioWaveformViewDelegate;

@interface MJAudioWaveformView : UIView {
    struct shared_ptr<std::vector<float>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _normalizedHeights;
    double _startOffset;
}

@property (weak, nonatomic) id<MJAudioWaveformViewDelegate> delegate;

+ (Class)layerClass;

- (id)shapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFillColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)drawWaveformWithNormalizedHeights:(const void *)a0 startOffset:(double)a1;
- (void)internalDrawWaveform;
- (void)internalClearWaveform;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
