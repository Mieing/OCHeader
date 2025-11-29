@class UIColor, NSString, NSArray, QScaleUnitsView, UIView;
@protocol QScaleViewDelegate;

@interface QScaleView : UIView {
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    double *_magicNumbers;
    int _oldNumberOfSegments;
    int _segmentNumber;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    double _tempSegmentLengthInMeters;
    NSArray *_scaleMetersArray;
    UIView *_outlineView;
    UIView *_verticalLineLeft;
    UIView *_verticalLineRight;
    QScaleUnitsView *_unitsView;
}

@property (weak, nonatomic) id<QScaleViewDelegate> delegate;
@property (nonatomic) BOOL useRegularStyle;
@property (nonatomic) double distanceInMeters;
@property (retain, nonatomic) NSString *customFont;
@property (nonatomic) BOOL isDarkMode;

- (void)dealloc;
- (id)init;
- (void)initAttributes;
- (void)initMagicNumber;
- (void)initBaseLayer;
- (void)updateOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)updateScaleViewWithScaleLevel:(int)a0 andDistanceMeters:(double)a1;
- (void)calculateSegments;
- (void)calculateSegmentLength;
- (void)updateDisplayStyle;
- (void)updateOutlineView;
- (id)drawVerticalLine:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 height:(double)a2;
- (void)updateUnitsView:(int)a0;
- (void)notifyScaleSegmentLengthChange;
- (struct CGSize { double x0; double x1; })getScaleViewMaxSize;
- (BOOL)checkRectIsValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
