@class NSString, CLLocation;

@interface BDPGetLocationModel : BDPBasePluginModel

@property (retain, nonatomic) CLLocation *wgsLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } gcjCoordinate;
@property (retain, nonatomic) CLLocation *gcjLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } wgsCoordinate;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *provinceCode;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *districtCode;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL isHighAccuracy;
@property (nonatomic) BOOL isCacheResult;
@property (nonatomic) BOOL isFirstReturnResult;
@property (copy, nonatomic) NSString *coordinateType;
@property (copy, nonatomic) NSString *apiName;

+ (BOOL)isForceGCJ;

- (id)initWithAWELocationModel:(id)a0;
- (id)initWithGCJLocation:(id)a0;
- (id)initWithWgsLocation:(id)a0;
- (id)realLocation;
- (struct CLLocationCoordinate2D { double x0; double x1; })realGCJCoordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; })realWGSCoordinate;
- (void).cxx_destruct;
- (id)init;

@end
