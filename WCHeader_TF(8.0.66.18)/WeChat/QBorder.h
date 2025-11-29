@interface QBorder : NSObject {
    struct CGPath { } *_borderPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _borderBoundingBox;
    struct CGPoint { double x0; double x1; } *_points;
    int _nPoints;
}

- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)containsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)constructBorderPath:(id)a0;
- (void)constructPathWithString:(id)a0 unitSeparator:(id)a1 itemSeparator:(id)a2;
- (id)initWithBorder:(id)a0;
- (void)dealloc;

@end
