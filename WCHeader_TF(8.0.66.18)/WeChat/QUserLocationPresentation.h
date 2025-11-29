@class UIColor, UIImage, QNavigationGravityLine, QUserLocationCompassPresentation;

@interface QUserLocationPresentation : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *circleFillColor;
@property (retain, nonatomic) QUserLocationCompassPresentation *compass;
@property (retain, nonatomic) QNavigationGravityLine *gravityLine;

- (void).cxx_destruct;

@end
