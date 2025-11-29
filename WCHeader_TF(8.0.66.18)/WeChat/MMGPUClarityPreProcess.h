@interface MMGPUClarityPreProcess : NSObject {
    float _mode;
    float _pixel_mapping[256];
    float _param_contrast_enhance_strength;
    float _param_histogram_clipping_relthresh;
    float _param_dynamic_range_extension;
    float _param_nonflat_region_thresh;
    float _param_color_saturation_decay;
    float _param_face_decay_zero;
    float _param_face_decay_one;
}

- (id)initWithMode:(int)a0;
- (void)dealloc;
- (void)reset;
- (void)analyzePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)analyzePixelBuffer:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 stride:(unsigned long long)a3;
- (float *)getPixelMapping;

@end
