@interface OQPPixelwiseBorderLayer : CAShapeLayer {
    double _uniformEdgeInsetPoints;
}

- (id)init;
- (id)initWithLineWidthPoints:(double)a0 uniformEdgeInsetPoints:(double)a1;
- (id)initWithLineWidthPixels:(double)a0 uniformEdgeInsetPixels:(double)a1;
- (void)layoutSublayers;
- (struct CGPath { } *)borderPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;

@end
