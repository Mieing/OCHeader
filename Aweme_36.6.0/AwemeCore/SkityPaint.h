@class UIColor;

@interface SkityPaint : NSObject {
    struct Paint { unsigned char cap_; unsigned char join_; unsigned char style_; float stroke_width_; float miter_limit_; float text_size_; BOOL sdf_for_small_text_; float font_fill_threshold_; struct vec<4, float, glm::packed_highp> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } fill_color_; struct vec<4, float, glm::packed_highp> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } stroke_color_; BOOL is_anti_alias_; int blend_mode_; struct shared_ptr<skity::PathEffect> { struct PathEffect *__ptr_; struct __shared_weak_count *__cntrl_; } path_effect_; struct shared_ptr<skity::Shader> { struct Shader *__ptr_; struct __shared_weak_count *__cntrl_; } shader_; struct Typeface *typeface_; struct shared_ptr<skity::ColorFilter> { struct ColorFilter *__ptr_; struct __shared_weak_count *__cntrl_; } color_filter_; struct shared_ptr<skity::ImageFilter> { struct ImageFilter *__ptr_; struct __shared_weak_count *__cntrl_; } image_filter_; struct shared_ptr<skity::MaskFilter> { struct MaskFilter *__ptr_; struct __shared_weak_count *__cntrl_; } mask_filter_; BOOL is_adjust_stroke_; } _nativePaint;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long cap;
@property (nonatomic) unsigned long long join;
@property (nonatomic) double strokeWidth;
@property (nonatomic) double strokeMiter;
@property (nonatomic) unsigned long long blendMode;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double alpha;

- (void)setLinearGradient:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1 colors:(id)a2 stops:(id)a3;
- (void)setStrokeColor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void *)handler;
- (id).cxx_construct;

@end
