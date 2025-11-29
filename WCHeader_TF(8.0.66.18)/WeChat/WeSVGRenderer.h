@interface WeSVGRenderer : NSObject {
    struct shared_ptr<wesvg::RenderModel> { struct RenderModel *__ptr_; struct __shared_weak_count *__cntrl_; } _model;
    struct RenderOptions { struct CGSize { double width; double height; } size; double scale; double rotation; double opacity; struct optional<wesvg::RGBAColor> { union { char __null_state_; struct RGBAColor { unsigned char r; unsigned char g; unsigned char b; unsigned char a; } __val_; } ; BOOL __engaged_; } color; } _options;
}

+ (struct CGImage { } *)createImageWithSize:(struct CGSize { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 type:(long long)a2 actions:(id /* block */)a3;
+ (struct CGColor { } *)createColorFromRGBColor:(const struct RGBColor { unsigned char x0; unsigned char x1; unsigned char x2; } *)a0 opacity:(double)a1;
+ (struct CGColor { } *)createColorFromRGBAColor:(const struct RGBAColor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0;
+ (struct CGGradient { } *)createGradientFromGradient:(const void *)a0 context:(struct CGContext { } *)a1 providedColor:(struct optional<wesvg::RGBColor> { union { char x0; struct RGBColor { unsigned char x0; unsigned char x1; unsigned char x2; } x1; } x0; BOOL x1; })a2;
+ (void)performContainerOpacity:(double)a0 context:(struct CGContext { } *)a1 handler:(id /* block */)a2;
+ (struct CGPath { } *)createPathFromShape:(const void *)a0;
+ (struct CGPath { } *)createPathFromPath:(const void *)a0;

- (id)initWithRenderModel:(struct shared_ptr<wesvg::RenderModel> { struct RenderModel *x0; struct __shared_weak_count *x1; })a0 options:(void *)a1;
- (id)renderImage;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })contextBaseTransform;
- (struct CGImage { } *)createImageWithActions:(id /* block */)a0;
- (struct CGImage { } *)createMaskImageWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 actions:(id /* block */)a1;
- (void)handleNode:(struct shared_ptr<wesvg::RenderElement> { struct RenderElement *x0; struct __shared_weak_count *x1; })a0 context:(struct CGContext { } *)a1;
- (void)drawContainer:(const void *)a0 context:(struct CGContext { } *)a1;
- (void)drawGraphics:(const void *)a0 context:(struct CGContext { } *)a1;
- (void)performGradient:(const void *)a0 forPath:(struct CGPath { } *)a1 context:(struct CGContext { } *)a2 isEvenOdd:(BOOL)a3;
- (void)performMask:(struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; } x0; BOOL x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 context:(struct CGContext { } *)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
