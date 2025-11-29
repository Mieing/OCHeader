@class UIColor;

@interface MACustomBuildingOverlayOption : MAMultiPoint

@property (nonatomic) double height;
@property (nonatomic) double heightScale;
@property (retain, nonatomic) UIColor *topColor;
@property (retain, nonatomic) UIColor *sideColor;
@property (nonatomic) BOOL visibile;

+ (id)optionWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;

- (id)initWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)postUpdateNotification;
- (BOOL)setOptionWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;

@end
