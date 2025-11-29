@class NSString, UIColor, UIFont;

@interface MAScaleViewLite : UIView {
    double _resultSegmentLengthInMeters;
    double _resultSegmentLength;
    double _magicNumbers[3];
    UIColor *_scaleColor;
    UIColor *_borderColor;
    UIFont *_textFont;
}

@property (retain, nonatomic) NSString *drawingText;
@property (nonatomic) double distanceInMeters;

- (void)updateOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)initMagicNumber;
- (void)calculateSegmentLength;
- (id)getFormattedString:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
