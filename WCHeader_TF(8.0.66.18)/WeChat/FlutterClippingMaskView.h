@interface FlutterClippingMaskView : UIView {
    struct vector<fml::CFRef<const CGPath *>, std::allocator<fml::CFRef<const CGPath *>>> { void *__begin_; void *__end_; struct __compressed_pair<fml::CFRef<const CGPath *> *, std::allocator<fml::CFRef<const CGPath *>>> { void *__value_; } __end_cap_; } paths_;
    BOOL containsNonRectPath_;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectSoFar_;
}

@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } reverseScreenScale;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenScale:(double)a1;
- (id)shapeLayer;
- (void)reset;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clipRect:(const void *)a0 matrix:(const struct Matrix { union { float x0[16]; float x1[4][4]; struct Vector4 { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x2[4]; } x0; } *)a1;
- (void)clipRRect:(const void *)a0 matrix:(const struct Matrix { union { float x0[16]; float x1[4][4]; struct Vector4 { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x2[4]; } x0; } *)a1;
- (void)clipPath:(const void *)a0 matrix:(const struct Matrix { union { float x0[16]; float x1[4][4]; struct Vector4 { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x2[4]; } x0; } *)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineWithMatrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (struct CFRef<const CGPath *> { struct CGPath *x0; })getTransformedPath:(struct CGPath { } *)a0 matrix:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
