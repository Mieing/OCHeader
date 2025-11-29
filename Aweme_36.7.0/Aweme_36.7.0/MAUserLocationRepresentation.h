@class UIColor, UIImage;

@interface MAUserLocationRepresentation : NSObject

@property (nonatomic) BOOL showsAccuracyRing;
@property (nonatomic) BOOL showsHeadingIndicator;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *locationDotBgColor;
@property (retain, nonatomic) UIColor *locationDotFillColor;
@property (nonatomic) BOOL enablePulseAnnimation;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)init;

@end
