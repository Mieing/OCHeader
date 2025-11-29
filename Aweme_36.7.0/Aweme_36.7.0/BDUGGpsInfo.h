@interface BDUGGpsInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double accuracy;
@property (nonatomic) double altitude;
@property (nonatomic) double altitudeAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double timestamp;

+ (id)gpsInfoWithDictionary:(id)a0;

- (id)initWithAccuracy:(double)a0 altitude:(double)a1 altitudeAccuracy:(double)a2 latitude:(double)a3 longitude:(double)a4 timestamp:(double)a5;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toJSON;

@end
