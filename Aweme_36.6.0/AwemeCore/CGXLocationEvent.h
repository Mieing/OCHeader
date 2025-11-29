@class NSArray, CGXGnssSvInfo;

@interface CGXLocationEvent : NSObject

@property (nonatomic) long long providerType;
@property (nonatomic) long long time;
@property (nonatomic) float elapsedRealTimeNanos;
@property (nonatomic) float altitude;
@property (nonatomic) float verticalAccuracy;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) float accuracy;
@property (nonatomic) float speed;
@property (nonatomic) float speedAccuracy;
@property (nonatomic) float bearing;
@property (nonatomic) float bearingAccuracy;
@property (retain, nonatomic) CGXGnssSvInfo *gnssSvInfo;
@property (retain, nonatomic) NSArray *nmea;

- (void).cxx_destruct;
- (id)description;

@end
