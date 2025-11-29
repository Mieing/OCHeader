@class NSString;

@interface StatusPoiInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;

+ (void)initialize;

- (void)setLatitude:(double)a0;
- (double)latitude;
- (void)setLongitude:(double)a0;
- (double)longitude;
- (void)setCity:(id)a0;
- (id)city;
- (void)setPoiName:(id)a0;
- (id)poiName;
- (void)setPoiId:(id)a0;
- (id)poiId;

@end
