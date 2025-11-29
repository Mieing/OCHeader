@class QGPLatLng;

@interface QGPGetPositionReturn : QGPReturn

@property (retain, nonatomic) QGPLatLng *value;

- (id)initWithLat:(double)a0 lng:(double)a1 altitude:(double)a2;
- (void).cxx_destruct;

@end
