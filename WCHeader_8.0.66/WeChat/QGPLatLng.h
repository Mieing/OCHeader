@class NSNumber;
@protocol QTCOptional;

@interface QGPLatLng : QGPBaseModel

@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (retain, nonatomic) NSNumber<QTCOptional> *altitude;

- (id)initWithLat:(double)a0 lng:(double)a1 altitude:(double)a2;
- (void).cxx_destruct;

@end
