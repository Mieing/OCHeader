@class NSString;

@interface MMNearbyPoiInfo : MMObject

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double radius;
@property (readonly, copy, nonatomic) NSString *poiName;

- (id)initWithLatitude:(double)a0 longitude:(double)a1 radius:(double)a2 name:(id)a3;
- (void).cxx_destruct;

@end
