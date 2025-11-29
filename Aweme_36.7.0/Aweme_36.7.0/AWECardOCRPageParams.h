@class NSNumber;

@interface AWECardOCRPageParams : NSObject

@property (retain, nonatomic) NSNumber *cardType;
@property (retain, nonatomic) NSNumber *direction;
@property (retain, nonatomic) NSNumber *banScan;
@property (retain, nonatomic) NSNumber *banCamera;
@property (retain, nonatomic) NSNumber *banAlbum;

- (void).cxx_destruct;
- (double)rotationAngle;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pageTransform;

@end
